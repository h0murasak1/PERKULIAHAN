<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use App\Models\Materi;

class MateriSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $materis = [
            ['materi' => 'Matematika', 'nama_guru' => 'Budi'],
            ['materi' => 'Bahasa Indonesia', 'nama_guru' => 'Ani'],
            ['materi' => 'IPA', 'nama_guru' => 'Citra'],
            ['materi' => 'IPS', 'nama_guru' => 'Dewi'],
            ['materi' => 'PKN', 'nama_guru' => 'Eko'],
        ];

        foreach ($materis as $materi) {
            Materi::create($materi);
        }
    }
}
