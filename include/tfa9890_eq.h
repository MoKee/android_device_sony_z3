/*
 * Copyright (C) 2014, The MoKee OpenSource Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Data passed by the stock audio HAL, dumped from the kernel driver
static unsigned char eq_data[TYPE_MAX][190] = {
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x060, 0x07d, 0x0c8, 0x080, 0x00f, 0x0cd, 0x078, 0x0e0, 0x065, 0x014, 0x00f, 0x0cd, 0x078, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x0b0, 0x07d, 0x0d1, 0x048, 0x03e, 0x0eb, 0x068, 0x082, 0x029, 0x034, 0x03e, 0x0eb, 0x068, 0x003, 0x000, 0x000, 0x001, 0x0c4, 0x0d4, 0x068, 0x07a, 0x09f, 0x0a8, 0x038, 0x0c4, 0x050, 0x085, 0x060, 0x058, 0x042, 0x067, 0x048, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x00e, 0x058, 0x06e, 0x0bc, 0x0e0, 0x031, 0x015, 0x088, 0x091, 0x043, 0x020, 0x043, 0x0dc, 0x020, 0x005, 0x000, 0x000, 0x000, 0x0b1, 0x082, 0x0d8, 0x079, 0x05f, 0x000, 0x059, 0x052, 0x0c8, 0x086, 0x0a1, 0x000, 0x075, 0x02a, 0x060, 0x006, 0x000, 0x000, 0x001, 0x0c0, 0x0df, 0x08c, 0x07e, 0x0ef, 0x048, 0x03f, 0x012, 0x0d4, 0x081, 0x010, 0x0b8, 0x040, 0x00d, 0x0a4, 0x007, 0x000, 0x000, 0x001, 0x0d9, 0x099, 0x098, 0x000, 0x000, 0x000, 0x00c, 0x0fc, 0x0b4, 0x000, 0x000, 0x000, 0x059, 0x069, 0x0b4, 0x008, 0x000, 0x000, 0x001, 0x0dc, 0x033, 0x0a0, 0x061, 0x00a, 0x078, 0x026, 0x0b2, 0x0d0, 0x09e, 0x0f5, 0x088, 0x03d, 0x019, 0x090, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x050, 0x040, 0x074, 0x0bc, 0x040, 0x038, 0x08a, 0x09c, 0x08b, 0x043, 0x0c0, 0x03f, 0x025, 0x024, 0x00a, 0x000, 0x000, 0x000, 0x0d6, 0x0e3, 0x058, 0x0d4, 0x03b, 0x008, 0x03b, 0x0b6, 0x0d8, 0x077, 0x06d, 0x0a8, 0x03b, 0x0b6, 0x0d8},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x02d, 0x0d4, 0x07d, 0x0ae, 0x068, 0x00f, 0x0cb, 0x02c, 0x0e0, 0x069, 0x0a8, 0x00f, 0x0cb, 0x02c, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x0ab, 0x0f4, 0x07b, 0x05e, 0x048, 0x03b, 0x041, 0x02c, 0x084, 0x0a1, 0x0b8, 0x041, 0x012, 0x0e4, 0x003, 0x000, 0x000, 0x001, 0x0c2, 0x0d0, 0x064, 0x07c, 0x0dc, 0x094, 0x03c, 0x07c, 0x0dc, 0x083, 0x023, 0x06c, 0x040, 0x0b2, 0x0c0, 0x004, 0x000, 0x000, 0x001, 0x0c5, 0x07c, 0x0f0, 0x072, 0x05f, 0x0f0, 0x039, 0x0cd, 0x02c, 0x08d, 0x0a0, 0x010, 0x040, 0x0b5, 0x0e4, 0x005, 0x000, 0x000, 0x001, 0x0c8, 0x089, 0x00c, 0x074, 0x0b0, 0x064, 0x038, 0x088, 0x034, 0x08b, 0x04f, 0x09c, 0x03e, 0x0ee, 0x0c0, 0x006, 0x000, 0x000, 0x001, 0x0d7, 0x004, 0x0bc, 0x059, 0x082, 0x0f0, 0x02b, 0x059, 0x040, 0x0a6, 0x07d, 0x010, 0x03d, 0x0a2, 0x004, 0x007, 0x000, 0x000, 0x001, 0x0c7, 0x036, 0x0dc, 0x070, 0x0c3, 0x060, 0x037, 0x0da, 0x00c, 0x08f, 0x03c, 0x0a0, 0x040, 0x0ef, 0x018, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0d0, 0x074, 0x06a, 0x024, 0x018, 0x032, 0x0a8, 0x000, 0x095, 0x0db, 0x0e8, 0x041, 0x087, 0x08c, 0x009, 0x000, 0x000, 0x001, 0x0da, 0x0eb, 0x0d4, 0x01c, 0x0b5, 0x03c, 0x002, 0x0c7, 0x084, 0x0e3, 0x04a, 0x0c4, 0x062, 0x04c, 0x0a8, 0x00a, 0x000, 0x000, 0x000, 0x0da, 0x0c2, 0x090, 0x0fb, 0x0ac, 0x0b0, 0x02a, 0x064, 0x030, 0x054, 0x0c8, 0x060, 0x02a, 0x064, 0x030},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x060, 0x07d, 0x0c8, 0x080, 0x00f, 0x0cd, 0x078, 0x0e0, 0x065, 0x014, 0x00f, 0x0cd, 0x078, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x0b0, 0x07d, 0x0d1, 0x048, 0x03e, 0x0eb, 0x068, 0x082, 0x029, 0x034, 0x03e, 0x0eb, 0x068, 0x003, 0x000, 0x000, 0x001, 0x0c4, 0x0d4, 0x068, 0x07a, 0x09f, 0x0a8, 0x038, 0x0c4, 0x050, 0x085, 0x060, 0x058, 0x042, 0x067, 0x048, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x00e, 0x058, 0x06e, 0x0bc, 0x0e0, 0x031, 0x015, 0x088, 0x091, 0x043, 0x020, 0x043, 0x0dc, 0x020, 0x005, 0x000, 0x000, 0x000, 0x0b1, 0x082, 0x0d8, 0x079, 0x05f, 0x000, 0x059, 0x052, 0x0c8, 0x086, 0x0a1, 0x000, 0x075, 0x02a, 0x060, 0x006, 0x000, 0x000, 0x001, 0x0c0, 0x0df, 0x08c, 0x07e, 0x0ef, 0x048, 0x03f, 0x012, 0x0d4, 0x081, 0x010, 0x0b8, 0x040, 0x00d, 0x0a4, 0x007, 0x000, 0x000, 0x001, 0x0d9, 0x099, 0x098, 0x000, 0x000, 0x000, 0x00c, 0x0fc, 0x0b4, 0x000, 0x000, 0x000, 0x059, 0x069, 0x0b4, 0x008, 0x000, 0x000, 0x001, 0x0cc, 0x007, 0x008, 0x071, 0x070, 0x030, 0x036, 0x0f8, 0x0e8, 0x08e, 0x08f, 0x0d0, 0x03d, 0x000, 0x010, 0x009, 0x000, 0x000, 0x001, 0x0c4, 0x0cb, 0x02c, 0x077, 0x0cd, 0x058, 0x03a, 0x095, 0x0f4, 0x088, 0x032, 0x0a8, 0x040, 0x09e, 0x0e0, 0x00a, 0x000, 0x000, 0x000, 0x0d6, 0x0e3, 0x058, 0x0d4, 0x03b, 0x008, 0x03b, 0x0b6, 0x0d8, 0x077, 0x06d, 0x0a8, 0x03b, 0x0b6, 0x0d8},
{0x001, 0x000, 0x000, 0x001, 0x0c6, 0x06a, 0x008, 0x078, 0x053, 0x0d8, 0x018, 0x013, 0x0ac, 0x0cf, 0x0d8, 0x0a8, 0x018, 0x013, 0x0ac, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x0ab, 0x0f4, 0x07b, 0x05e, 0x048, 0x03b, 0x041, 0x02c, 0x084, 0x0a1, 0x0b8, 0x041, 0x012, 0x0e4, 0x003, 0x000, 0x000, 0x001, 0x0c2, 0x0d0, 0x064, 0x07c, 0x0dc, 0x094, 0x03c, 0x07c, 0x0dc, 0x083, 0x023, 0x06c, 0x040, 0x0b2, 0x0c0, 0x004, 0x000, 0x000, 0x001, 0x0c5, 0x07c, 0x0f0, 0x072, 0x05f, 0x0f0, 0x039, 0x0cd, 0x02c, 0x08d, 0x0a0, 0x010, 0x040, 0x0b5, 0x0e4, 0x005, 0x000, 0x000, 0x001, 0x0c6, 0x082, 0x058, 0x076, 0x0ab, 0x008, 0x036, 0x040, 0x070, 0x089, 0x054, 0x0f8, 0x043, 0x03d, 0x038, 0x006, 0x000, 0x000, 0x001, 0x0d7, 0x004, 0x0bc, 0x059, 0x082, 0x0f0, 0x02b, 0x059, 0x040, 0x0a6, 0x07d, 0x010, 0x03d, 0x0a2, 0x004, 0x007, 0x000, 0x000, 0x001, 0x0ce, 0x090, 0x0b8, 0x06f, 0x089, 0x004, 0x036, 0x022, 0x024, 0x090, 0x076, 0x0fc, 0x03b, 0x04d, 0x024, 0x008, 0x000, 0x000, 0x001, 0x0ca, 0x0d6, 0x050, 0x071, 0x0ec, 0x0f8, 0x037, 0x029, 0x09c, 0x08e, 0x013, 0x008, 0x03e, 0x000, 0x014, 0x009, 0x000, 0x000, 0x001, 0x0da, 0x0eb, 0x0d4, 0x01c, 0x0b5, 0x03c, 0x017, 0x0ae, 0x094, 0x0e3, 0x04a, 0x0c4, 0x04d, 0x065, 0x098, 0x00a, 0x000, 0x000, 0x000, 0x0da, 0x0c2, 0x090, 0x0fb, 0x0ac, 0x0b0, 0x02a, 0x064, 0x030, 0x054, 0x0c8, 0x060, 0x02a, 0x064, 0x030},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x060, 0x07d, 0x0c8, 0x080, 0x00f, 0x0cd, 0x078, 0x0e0, 0x065, 0x014, 0x00f, 0x0cd, 0x078, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x0b0, 0x07d, 0x0d1, 0x048, 0x03e, 0x0eb, 0x068, 0x082, 0x029, 0x034, 0x03e, 0x0eb, 0x068, 0x003, 0x000, 0x000, 0x001, 0x0c4, 0x0d4, 0x068, 0x07a, 0x09f, 0x0a8, 0x038, 0x0c4, 0x050, 0x085, 0x060, 0x058, 0x042, 0x067, 0x048, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x00e, 0x058, 0x06e, 0x0bc, 0x0e0, 0x031, 0x015, 0x088, 0x091, 0x043, 0x020, 0x043, 0x0dc, 0x020, 0x005, 0x000, 0x000, 0x000, 0x0b1, 0x082, 0x0d8, 0x079, 0x05f, 0x000, 0x059, 0x052, 0x0c8, 0x086, 0x0a1, 0x000, 0x075, 0x02a, 0x060, 0x006, 0x000, 0x000, 0x001, 0x0c0, 0x0df, 0x08c, 0x07e, 0x0ef, 0x048, 0x03f, 0x012, 0x0d4, 0x081, 0x010, 0x0b8, 0x040, 0x00d, 0x0a4, 0x007, 0x000, 0x000, 0x001, 0x0d9, 0x099, 0x098, 0x000, 0x000, 0x000, 0x00c, 0x0fc, 0x0b4, 0x000, 0x000, 0x000, 0x059, 0x069, 0x0b4, 0x008, 0x000, 0x000, 0x001, 0x0dc, 0x033, 0x0a0, 0x061, 0x00a, 0x078, 0x026, 0x0b2, 0x0d0, 0x09e, 0x0f5, 0x088, 0x03d, 0x019, 0x090, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x050, 0x040, 0x074, 0x0bc, 0x040, 0x038, 0x08a, 0x09c, 0x08b, 0x043, 0x0c0, 0x03f, 0x025, 0x024, 0x00a, 0x000, 0x000, 0x000, 0x0d6, 0x0e3, 0x058, 0x0d4, 0x03b, 0x008, 0x03b, 0x0b6, 0x0d8, 0x077, 0x06d, 0x0a8, 0x03b, 0x0b6, 0x0d8},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x02d, 0x0d4, 0x07d, 0x0ae, 0x068, 0x00f, 0x0cb, 0x02c, 0x0e0, 0x069, 0x0a8, 0x00f, 0x0cb, 0x02c, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x0ab, 0x0f4, 0x07b, 0x05e, 0x048, 0x03b, 0x041, 0x02c, 0x084, 0x0a1, 0x0b8, 0x041, 0x012, 0x0e4, 0x003, 0x000, 0x000, 0x001, 0x0c2, 0x0d0, 0x064, 0x07c, 0x0dc, 0x094, 0x03c, 0x07c, 0x0dc, 0x083, 0x023, 0x06c, 0x040, 0x0b2, 0x0c0, 0x004, 0x000, 0x000, 0x001, 0x0c5, 0x07c, 0x0f0, 0x072, 0x05f, 0x0f0, 0x039, 0x0cd, 0x02c, 0x08d, 0x0a0, 0x010, 0x040, 0x0b5, 0x0e4, 0x005, 0x000, 0x000, 0x001, 0x0c8, 0x089, 0x00c, 0x074, 0x0b0, 0x064, 0x038, 0x088, 0x034, 0x08b, 0x04f, 0x09c, 0x03e, 0x0ee, 0x0c0, 0x006, 0x000, 0x000, 0x001, 0x0d7, 0x004, 0x0bc, 0x059, 0x082, 0x0f0, 0x02b, 0x059, 0x040, 0x0a6, 0x07d, 0x010, 0x03d, 0x0a2, 0x004, 0x007, 0x000, 0x000, 0x001, 0x0c7, 0x036, 0x0dc, 0x070, 0x0c3, 0x060, 0x037, 0x0da, 0x00c, 0x08f, 0x03c, 0x0a0, 0x040, 0x0ef, 0x018, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0d0, 0x074, 0x06a, 0x024, 0x018, 0x032, 0x0a8, 0x000, 0x095, 0x0db, 0x0e8, 0x041, 0x087, 0x08c, 0x009, 0x000, 0x000, 0x001, 0x0da, 0x0eb, 0x0d4, 0x01c, 0x0b5, 0x03c, 0x002, 0x0c7, 0x084, 0x0e3, 0x04a, 0x0c4, 0x062, 0x04c, 0x0a8, 0x00a, 0x000, 0x000, 0x000, 0x0da, 0x0c2, 0x090, 0x0fb, 0x0ac, 0x0b0, 0x02a, 0x064, 0x030, 0x054, 0x0c8, 0x060, 0x02a, 0x064, 0x030},
{0x001, 0x000, 0x000, 0x001, 0x0c4, 0x07c, 0x0e4, 0x07b, 0x03f, 0x06c, 0x033, 0x0e7, 0x0d8, 0x098, 0x030, 0x050, 0x033, 0x0e7, 0x0d8, 0x002, 0x000, 0x000, 0x001, 0x0db, 0x07a, 0x034, 0x05c, 0x0de, 0x0ec, 0x001, 0x0e9, 0x0b8, 0x003, 0x0d3, 0x070, 0x001, 0x0e9, 0x0b8, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0ec, 0x054, 0x07d, 0x002, 0x088, 0x037, 0x0b8, 0x0f8, 0x090, 0x08e, 0x014, 0x037, 0x0b8, 0x0f8, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x043, 0x09c, 0x07c, 0x090, 0x0a0, 0x03e, 0x053, 0x040, 0x083, 0x059, 0x07c, 0x03e, 0x053, 0x040, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0ec, 0x08f, 0x04c, 0x04d, 0x016, 0x0b8, 0x020, 0x0d9, 0x0b0, 0x0b2, 0x0e9, 0x048, 0x032, 0x097, 0x004, 0x009, 0x000, 0x000, 0x000, 0x0dd, 0x0b5, 0x0d0, 0x03e, 0x01b, 0x008, 0x019, 0x00b, 0x0c8, 0x032, 0x017, 0x098, 0x019, 0x00b, 0x0c8, 0x00a, 0x000, 0x000, 0x000, 0x0d6, 0x0d4, 0x058, 0x040, 0x0bd, 0x020, 0x01a, 0x01b, 0x0a0, 0x034, 0x037, 0x040, 0x01a, 0x01b, 0x0a0},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x060, 0x07d, 0x0c8, 0x080, 0x00f, 0x0cd, 0x078, 0x0e0, 0x065, 0x014, 0x00f, 0x0cd, 0x078, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x023, 0x0b0, 0x07d, 0x0d1, 0x048, 0x03e, 0x0eb, 0x068, 0x082, 0x029, 0x034, 0x03e, 0x0eb, 0x068, 0x003, 0x000, 0x000, 0x001, 0x0c4, 0x0d4, 0x068, 0x07a, 0x09f, 0x0a8, 0x038, 0x0c4, 0x050, 0x085, 0x060, 0x058, 0x042, 0x067, 0x048, 0x004, 0x000, 0x000, 0x001, 0x0cb, 0x00e, 0x058, 0x06e, 0x0bc, 0x0e0, 0x031, 0x015, 0x088, 0x091, 0x043, 0x020, 0x043, 0x0dc, 0x020, 0x005, 0x000, 0x000, 0x000, 0x0b1, 0x082, 0x0d8, 0x079, 0x05f, 0x000, 0x059, 0x052, 0x0c8, 0x086, 0x0a1, 0x000, 0x075, 0x02a, 0x060, 0x006, 0x000, 0x000, 0x001, 0x0c0, 0x0df, 0x08c, 0x07e, 0x0ef, 0x048, 0x03f, 0x012, 0x0d4, 0x081, 0x010, 0x0b8, 0x040, 0x00d, 0x0a4, 0x007, 0x000, 0x000, 0x001, 0x0d9, 0x099, 0x098, 0x000, 0x000, 0x000, 0x00c, 0x0fc, 0x0b4, 0x000, 0x000, 0x000, 0x059, 0x069, 0x0b4, 0x008, 0x000, 0x000, 0x001, 0x0dc, 0x033, 0x0a0, 0x061, 0x00a, 0x078, 0x026, 0x0b2, 0x0d0, 0x09e, 0x0f5, 0x088, 0x03d, 0x019, 0x090, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x050, 0x040, 0x074, 0x0bc, 0x040, 0x038, 0x08a, 0x09c, 0x08b, 0x043, 0x0c0, 0x03f, 0x025, 0x024, 0x00a, 0x000, 0x000, 0x000, 0x0d6, 0x0e3, 0x058, 0x0d4, 0x03b, 0x008, 0x03b, 0x0b6, 0x0d8, 0x077, 0x06d, 0x0a8, 0x03b, 0x0b6, 0x0d8},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x02d, 0x0d4, 0x07d, 0x0ae, 0x068, 0x00f, 0x0cb, 0x02c, 0x0e0, 0x069, 0x0a8, 0x00f, 0x0cb, 0x02c, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x0ab, 0x0f4, 0x07b, 0x05e, 0x048, 0x03b, 0x041, 0x02c, 0x084, 0x0a1, 0x0b8, 0x041, 0x012, 0x0e4, 0x003, 0x000, 0x000, 0x001, 0x0c2, 0x0d0, 0x064, 0x07c, 0x0dc, 0x094, 0x03c, 0x07c, 0x0dc, 0x083, 0x023, 0x06c, 0x040, 0x0b2, 0x0c0, 0x004, 0x000, 0x000, 0x001, 0x0c5, 0x07c, 0x0f0, 0x072, 0x05f, 0x0f0, 0x039, 0x0cd, 0x02c, 0x08d, 0x0a0, 0x010, 0x040, 0x0b5, 0x0e4, 0x005, 0x000, 0x000, 0x001, 0x0c8, 0x089, 0x00c, 0x074, 0x0b0, 0x064, 0x038, 0x088, 0x034, 0x08b, 0x04f, 0x09c, 0x03e, 0x0ee, 0x0c0, 0x006, 0x000, 0x000, 0x001, 0x0d7, 0x004, 0x0bc, 0x059, 0x082, 0x0f0, 0x02b, 0x059, 0x040, 0x0a6, 0x07d, 0x010, 0x03d, 0x0a2, 0x004, 0x007, 0x000, 0x000, 0x001, 0x0c7, 0x036, 0x0dc, 0x070, 0x0c3, 0x060, 0x037, 0x0da, 0x00c, 0x08f, 0x03c, 0x0a0, 0x040, 0x0ef, 0x018, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0d0, 0x074, 0x06a, 0x024, 0x018, 0x032, 0x0a8, 0x000, 0x095, 0x0db, 0x0e8, 0x041, 0x087, 0x08c, 0x009, 0x000, 0x000, 0x001, 0x0da, 0x0eb, 0x0d4, 0x01c, 0x0b5, 0x03c, 0x002, 0x0c7, 0x084, 0x0e3, 0x04a, 0x0c4, 0x062, 0x04c, 0x0a8, 0x00a, 0x000, 0x000, 0x000, 0x0da, 0x0c2, 0x090, 0x0fb, 0x0ac, 0x0b0, 0x02a, 0x064, 0x030, 0x054, 0x0c8, 0x060, 0x02a, 0x064, 0x030},
{0x001, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x002, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x003, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x004, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x005, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x006, 0x000, 0x000, 0x001, 0x0c0, 0x096, 0x0f4, 0x07f, 0x068, 0x058, 0x03f, 0x0b4, 0x058, 0x080, 0x097, 0x04c, 0x03f, 0x0b4, 0x058, 0x007, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090, 0x008, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090, 0x009, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090, 0x00a, 0x000, 0x000, 0x000, 0x0e5, 0x028, 0x030, 0x03b, 0x041, 0x080, 0x017, 0x0e5, 0x090, 0x02f, 0x0cb, 0x028, 0x017, 0x0e5, 0x090}
};
