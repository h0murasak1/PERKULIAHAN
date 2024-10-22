<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Grade extends Model
{
    protected $fillable = ['enrollment_id', 'assessment_id', 'score'];

    public function enrollment()
    {
        return $this->belongsTo(Enrollment::class);
    }

    public function assessment()
    {
        return $this->belongsTo(Assessment::class);
    }
}
