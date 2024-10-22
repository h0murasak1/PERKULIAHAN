<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Member extends Model
{
    protected $fillable = [
        'name',
        'email',
        'password',
        'role'
    ];

    public function enrollments()
    {
        return $this->hasMany(Enrollment::class);
    }
}
