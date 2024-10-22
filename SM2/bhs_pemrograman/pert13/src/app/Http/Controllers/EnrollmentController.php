<?php

namespace App\Http\Controllers;

use App\Models\Enrollment;
use Illuminate\Http\Request;

class EnrollmentController extends Controller
{
    public function index()
    {
        return Enrollment::all();
    }

    public function store(Request $request)
    {
        $this->validate($request, [
            'member_id' => 'required|exists:members,id',
            'course_id' => 'required|exists:courses,id',
            'status' => 'required|string|in:terdaftar,lulus,tidak lulus'
        ]);

        $enrollment = Enrollment::create($request->all());
        return response()->json($enrollment, 201);
    }

    public function show($id)
    {
        return Enrollment::findOrFail($id);
    }

    public function update(Request $request, $id)
    {
        $enrollment = Enrollment::findOrFail($id);
        $enrollment->update($request->all());
        return response()->json($enrollment, 200);
    }

    public function destroy($id)
    {
        $enrollment = Enrollment::find($id);

        if (!$enrollment) {
            return response()->json(['message' => 'Enrollment not found'], 404);
        }

        if ($enrollment->delete()) {
            return response()->json(['message' => 'Enrollment deleted successfully'], 200);
        } else {
            return response()->json(['message' => 'Failed to delete enrollment'], 500);
        }
    }
}
