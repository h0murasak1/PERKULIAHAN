<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;

class DatabaseSeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        $this->call([UserSeeder::class]);
        // $this->call([CourseSeeder::class]);
        // $this->call([EnrollmentSeeder::class]);
        // $this->call([AssessmentSeeder::class]);
        // $this->call([GradeSeeder::class]);
        // $this->call([MaterialSeeder::class]);
    }
}
