<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use App\Models\Guru;

class GuruSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $gurus = [
            ['nama_guru' => 'Budi', 'materi' => 'Matematika'],
            ['nama_guru' => 'Ani', 'materi' => 'Bahasa Indonesia'],
            ['nama_guru' => 'Citra', 'materi' => 'IPA'],
            ['nama_guru' => 'Dewi', 'materi' => 'IPS'],
            ['nama_guru' => 'Eko', 'materi' => 'PKN'],
        ];

        foreach ($gurus as $guru) {
            Guru::create($guru);
        }
    }
}
