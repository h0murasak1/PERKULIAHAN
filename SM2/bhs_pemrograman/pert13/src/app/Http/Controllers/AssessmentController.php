<?php

namespace App\Http\Controllers;

use App\Models\Assessment;
use Illuminate\Http\Request;

class AssessmentController extends Controller
{
    public function index()
    {
        return Assessment::all();
    }

    public function store(Request $request)
    {
        $this->validate($request, [
            'course_id' => 'required|exists:courses,id',
            'title' => 'required|string',
            'max_score' => 'required|integer'
        ]);

        $assessment = Assessment::create($request->all());
        return response()->json($assessment, 201);
    }

    public function show($id)
    {
        return Assessment::findOrFail($id);
    }

    public function update(Request $request, $id)
    {
        $assessment = Assessment::findOrFail($id);
        $assessment->update($request->all());
        return response()->json($assessment, 200);
    }

    public function destroy($id)
    {
        $assessment = Assessment::find($id);

        if (!$assessment) {
            return response()->json(['message' => 'Assessment not found'], 404);
        }

        if ($assessment->delete()) {
            return response()->json(['message' => 'Assessment deleted successfully'], 200);
        } else {
            return response()->json(['message' => 'Failed to delete assessment'], 500);
        }
    }
}
