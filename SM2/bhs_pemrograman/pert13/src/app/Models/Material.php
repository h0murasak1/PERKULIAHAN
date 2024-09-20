<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Material extends Model
{
    protected $fillable = ['course_id', 'title', 'description', 'file'];

    public function course()
    {
        return $this->belongsTo(Course::class);
    }
}
