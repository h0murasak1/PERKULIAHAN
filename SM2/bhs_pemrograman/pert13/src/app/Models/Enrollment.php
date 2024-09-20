<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Enrollment extends Model
{
    protected $fillable = ['member_id', 'course_id', 'status'];

    public function member()
    {
        return $this->belongsTo(Member::class, 'member_id');
    }

    public function course()
    {
        return $this->belongsTo(Course::class);
    }

}
