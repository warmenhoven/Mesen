#pragma once

enum class DebuggerFlags
{
	PpuPartialDraw = 1,
	ShowEffectiveAddresses = 2,
	ShowOnlyDisassembledCode = 4,
	DisplayOpCodesInLowerCase = 8,
	DisassembleEverything = 16,
	DisassembleEverythingButData = 32,
};

enum class AddressType
{
	InternalRam = 0,
	PrgRom = 1,
	WorkRam = 2,
	SaveRam = 3,
	Register = 4
};

struct AddressTypeInfo
{
	int32_t Address;
	AddressType Type;
};

enum class DebugMemoryType
{
	CpuMemory = 0,
	PpuMemory = 1,
	PaletteMemory = 2,
	SpriteMemory = 3,
	SecondarySpriteMemory = 4,
	PrgRom = 5,
	ChrRom = 6,
	ChrRam = 7,
	WorkRam = 8,
	SaveRam = 9,
	InternalRam = 10
};

enum class CdlHighlightType
{
	None = 0,
	HighlightUsed = 1,
	HighlightUnused = 2,
};