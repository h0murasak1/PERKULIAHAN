<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use App\Models\Jadwal;

class JadwalSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $jadwals = [
            ['hari' => 'Senin', 'jam' => '2024-11-15 08:00:00', 'materi' => 'Matematika'],
            ['hari' => 'Selasa', 'jam' => '2024-11-16 08:00:00', 'materi' => 'Bahasa Indonesia'],
            ['hari' => 'Rabu', 'jam' => '2024-11-17 08:00:00', 'materi' => 'IPA'],
            ['hari' => 'Kamis', 'jam' => '2024-11-18 08:00:00', 'materi' => 'IPS'],
            ['hari' => 'Jumat', 'jam' => '2024-11-19 08:00:00', 'materi' => 'PKN'],
        ];

        foreach ($jadwals as $jadwal) {
            Jadwal::create($jadwal);
        }
    }
}
