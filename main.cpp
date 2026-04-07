/*
 * Copyright (c) 2026 Kirill Pshenichnyi <pshcyrill@mail.ru>
 *
 * This file is part of fmt-examples.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <print>

int main(int argc, char *argv[]) {
        std::println("\033[1mHello to fmt-examples project\033[0m");
        std::println();

        const int value = 123;
        std::println("Auto standart: {}", value);
        std::println("Hex: {:x}", value);
        /* # - добавлять 0x */
        std::println("Hex: {:#x}", value);
        /* 06 - использовать 6 символов (включая 0x),  */
        std::println("Hex: {:#06x}", value);
        std::println();

        return 0;
}
