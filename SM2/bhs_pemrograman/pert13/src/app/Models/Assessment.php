<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Assessment extends Model
{
    protected $fillable = ['course_id', 'title', 'max_score'];

    public function course()
    {
        return $this->belongsTo(Course::class);
    }
}
