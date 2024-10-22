<?php

namespace App\Http\Controllers;

use App\Models\Grade;
use Illuminate\Http\Request;

class GradeController extends Controller
{
    public function index()
    {
        return Grade::all();
    }

    public function store(Request $request)
    {
        $this->validate($request, [
            'enrollment_id' => 'required|exists:enrollments,id',
            'assessment_id' => 'required|exists:assessments,id',
            'score' => 'required|integer'
        ]);

        $grade = Grade::create($request->all());
        return response()->json($grade, 201);
    }

    public function show($id)
    {
        return Grade::findOrFail($id);
    }

    public function update(Request $request, $id)
    {
        $grade = Grade::findOrFail($id);
        $grade->update($request->all());
        return response()->json($grade, 200);
    }

    public function destroy($id)
    {
        $grade = Grade::find($id);

        if (!$grade) {
            return response()->json(['message' => 'Grade not found'], 404);
        }
        if ($grade->delete()) {
            return response()->json(['message' => 'Grade deleted successfully'], 200);
        } else {
            return response()->json(['message' => 'Failed to delete grade'], 500);
        }
    }
}
