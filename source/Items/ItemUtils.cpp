// ******************************************************************************
// Filename:    ItemUtils.cpp
// Project:     Vox
// Author:      Steven Ball
//
// Purpose:
//   Utility functionality for items, mostly a way to associate item enums with
//   data like the friendly names and display strings.
//
// Revision History:
//   Initial Revision - 12/04/14
//
// Copyright (c) 2005-2016, Steven Ball
// ******************************************************************************

#include "Item.h"

string GetItemTypeToString(eItem type)
{
	switch(type)
	{
		case eItem_None:			{ return "None"; } break;
		case eItem_DroppedItem:		{ return "DroppedItem"; } break;
		case eItem_Coin:			{ return "Coin"; } break;
		case eItem_Heart:			{ return "Heart"; } break;
		case eItem_Gib:				{ return "Gib"; } break;
		case eItem_Tombstone:		{ return "TombStone"; } break;
		case eItem_Chest:			{ return "Chest"; } break;
		case eItem_Torch:			{ return "Torch"; } break;
		case eItem_Furnace:			{ return "Furnace"; } break;
		case eItem_Anvil:			{ return "Anvil"; } break;
		case eItem_QuestBoard:		{ return "QuestBoard"; } break;
		case eItem_CampFire:		{ return "CampFire"; } break;
		case eItem_Mannequin:		{ return "Mannequin"; } break;
		case eItem_Door:			{ return "Door"; } break;
		case eItem_Chair:			{ return "Chair"; } break;
		case eItem_Table:			{ return "Table"; } break;
		case eItem_Bed:				{ return "Bed"; } break;
		case eItem_Portal:			{ return "Portal"; } break;
		case eItem_PortalPillar:	{ return "PortalPillar"; } break;
		case eItem_CopperVein:		{ return "CopperVein"; } break;
		case eItem_CopperOre:		{ return "CopperOre"; } break;
		case eItem_CopperBar:		{ return "CopperBar"; } break;
		case eItem_IronVein:		{ return "IronVein"; } break;
		case eItem_IronOre:			{ return "IronOre"; } break;
		case eItem_IronBar:			{ return "IronBar"; } break;
		case eItem_SilverVein:		{ return "SilverVein"; } break;
		case eItem_SilverOre:		{ return "SilverOre"; } break;
		case eItem_SilverBar:		{ return "SilverBar"; } break;
		case eItem_GoldVein:		{ return "GoldVein"; } break;
		case eItem_GoldOre:			{ return "GoldOre"; } break;
		case eItem_GoldBar:			{ return "GoldBar"; } break;
		case eItem_CropSoil:		{ return "CropSoil"; } break;
		case eItem_CropWheat:		{ return "CropWheat"; } break;
		case eItem_CropCorn:		{ return "CropCorn"; } break;
		case eItem_CropTomato:		{ return "CropTomato"; } break;
		case eItem_Fence:			{ return "Fence"; } break;
		case eItem_Block_Grass:		{ return "BlockGrass"; } break;
		case eItem_Block_Dirt:		{ return "BlockDirt"; } break;
		case eItem_Block_Stone:		{ return "BlockStone"; } break;
		case eItem_Block_Wood:		{ return "BlockWood"; } break;
		case eItem_Block_Leaf:		{ return "BlockLead"; } break;
		case eItem_Block_Sand:		{ return "BlockSand"; } break;
		case eItem_Block_Cactus:	{ return "BlockCactus"; } break;
		case eItem_Block_Rock:		{ return "BlockRock"; } break;
		case eItem_Block_Snow:		{ return "BlockSnow"; } break;
	}

	return "";
}

eItem GetItemTypeFromString(string typeName)
{
	if(typeName == "None")			{ return eItem_None; }
	if(typeName == "DroppedItem")	{ return eItem_DroppedItem; }
	if(typeName == "Coin")			{ return eItem_Coin; }
	if(typeName == "Heart")			{ return eItem_Heart; }
	if(typeName == "Gib")			{ return eItem_Gib; }
	if(typeName == "TombStone")		{ return eItem_Tombstone; }
	if(typeName == "Chest")			{ return eItem_Chest; }
	if(typeName == "Torch")			{ return eItem_Torch; }
	if(typeName == "Furnace")		{ return eItem_Furnace; }
	if(typeName == "Anvil")			{ return eItem_Anvil; }
	if(typeName == "QuestBoard")	{ return eItem_QuestBoard; }
	if(typeName == "CampFire")		{ return eItem_CampFire; }
	if(typeName == "Mannequin")		{ return eItem_Mannequin; }
	if(typeName == "Door")			{ return eItem_Door; }
	if(typeName == "Chair")			{ return eItem_Chair; }
	if(typeName == "Table")			{ return eItem_Table; }
	if(typeName == "Bed")			{ return eItem_Bed; }
	if(typeName == "Portal")		{ return eItem_Portal; }
	if(typeName == "PortalPillar")	{ return eItem_PortalPillar; }
	if(typeName == "CopperVein")	{ return eItem_CopperVein; }
	if(typeName == "CopperOre")		{ return eItem_CopperOre; }
	if(typeName == "CopperBar")		{ return eItem_CopperBar; }
	if(typeName == "IronVein")		{ return eItem_IronVein; }
	if(typeName == "IronOre")		{ return eItem_IronOre; }
	if(typeName == "IronBar")		{ return eItem_IronBar; }
	if(typeName == "SilverVein")	{ return eItem_SilverVein; }
	if(typeName == "SilverOre")		{ return eItem_SilverOre; }
	if(typeName == "SilverBar")		{ return eItem_SilverBar; }
	if(typeName == "GoldVein")		{ return eItem_GoldVein; }
	if(typeName == "GoldOre")		{ return eItem_GoldOre; }
	if(typeName == "GoldBar")		{ return eItem_GoldBar; }
	if(typeName == "CropSoil")		{ return eItem_CropSoil; }
	if(typeName == "CropWheat")		{ return eItem_CropWheat; }
	if(typeName == "CropCorn")		{ return eItem_CropCorn; }
	if(typeName == "CropTomato")	{ return eItem_CropTomato; }
	if(typeName == "Fence")			{ return eItem_Fence; }
	if(typeName == "BlockGrass")	{ return eItem_Block_Grass; }
	if(typeName == "BlockDirt")		{ return eItem_Block_Dirt; }
	if(typeName == "BlockStone")	{ return eItem_Block_Stone; }
	if(typeName == "BlockWood")		{ return eItem_Block_Wood; }
	if(typeName == "BlockLead")		{ return eItem_Block_Leaf; }
	if(typeName == "BlockSand")		{ return eItem_Block_Sand; }
	if(typeName == "BlockCactus")	{ return eItem_Block_Cactus; }
	if(typeName == "BlockRock")		{ return eItem_Block_Rock; }
	if(typeName == "BlockSnow")		{ return eItem_Block_Snow; }

	return eItem_None;
}

string GetItemFilenameForType(eItem type)
{
	switch(type)
	{
		case eItem_None:			{ return ""; } break;
		case eItem_DroppedItem:		{ return ""; } break;
		case eItem_Coin:			{ return "media/gamedata/items/Coin/Coin.item"; } break;
		case eItem_Heart:			{ return "media/gamedata/items/Heart/Heart.item"; } break;
		case eItem_Gib:				{ return ""; } break;
		case eItem_Tombstone:		{ return "media/gamedata/items/Tombstone1.item"; } break;
		case eItem_Chest:			{ return "media/gamedata/items/Chest/Chest.item"; } break;
		case eItem_Torch:			{ return "media/gamedata/items/Torch/Torch.item"; } break;
		case eItem_Furnace:			{ return "media/gamedata/items/Furnace/Furnace.item"; } break;
		case eItem_Anvil:			{ return "media/gamedata/items/Anvil/Anvil.item"; } break;
		case eItem_QuestBoard:		{ return "media/gamedata/items/QuestBoard/QuestBoard.item"; } break;
		case eItem_CampFire:		{ return "media/gamedata/items/CampFire.item"; } break;
		case eItem_Mannequin:		{ return "media/gamedata/items/Mannequin/Mannequin.item"; } break;
		case eItem_Door:			{ return "media/gamedata/items/Door/Door.item"; } break;
		case eItem_Chair:			{ return "media/gamedata/items/Chair/Chair.item"; } break;
		case eItem_Table:			{ return "media/gamedata/items/Table/Table.item"; } break;
		case eItem_Bed:				{ return "media/gamedata/items/Bed/Bed.item"; } break;
		case eItem_Portal:			{ return ""; } break;
		case eItem_PortalPillar:	{ return ""; } break;
		case eItem_CopperVein:		{ return "media/gamedata/items/CopperVein/CopperVein0.item"; } break;
		case eItem_CopperOre:		{ return "media/gamedata/items/CopperOre/CopperOre.item"; } break;
		case eItem_CopperBar:		{ return "media/gamedata/items/CopperBar/CopperBar.item"; } break;
		case eItem_IronVein:		{ return "media/gamedata/items/IronVein/IronVein0.item"; } break;
		case eItem_IronOre:			{ return "media/gamedata/items/IronOre/IronOre.item"; } break;
		case eItem_IronBar:			{ return "media/gamedata/items/IronBar/IronBar.item"; } break;
		case eItem_SilverVein:		{ return "media/gamedata/items/SilverVein/SilverVein0.item"; } break;
		case eItem_SilverOre:		{ return "media/gamedata/items/SilverOre/SilverOre.item"; } break;
		case eItem_SilverBar:		{ return "media/gamedata/items/SilverBar/SilverBar.item"; } break;
		case eItem_GoldVein:		{ return "media/gamedata/items/GoldVein/GoldVein0.item"; } break;
		case eItem_GoldOre:			{ return "media/gamedata/items/GoldOre/GoldOre.item"; } break;
		case eItem_GoldBar:			{ return "media/gamedata/items/GoldBar/GoldBar.item"; } break;
		case eItem_CropSoil:		{ return ""; } break;
		case eItem_CropWheat:		{ return ""; } break;
		case eItem_CropCorn:		{ return ""; } break;
		case eItem_CropTomato:		{ return ""; } break;
		case eItem_Fence:			{ return ""; } break;
		case eItem_Block_Grass:		{ return "media/gamedata/items/BlockGrass/BlockGrass.item"; } break;
		case eItem_Block_Dirt:		{ return "media/gamedata/items/BlockDirt/BlockDirt.item"; } break;
		case eItem_Block_Stone:		{ return "media/gamedata/items/BlockStone/BlockStone.item"; } break;
		case eItem_Block_Wood:		{ return "media/gamedata/items/BlockWood/BlockWood.item"; } break;
		case eItem_Block_Leaf:		{ return "media/gamedata/items/BlockLead/BlockLead.item"; } break;
		case eItem_Block_Sand:		{ return "media/gamedata/items/BlockSand/BlockSand.item"; } break;
		case eItem_Block_Cactus:	{ return "media/gamedata/items/BlockCactus/BlockCactus.item"; } break;
		case eItem_Block_Rock:		{ return "media/gamedata/items/BlockRock/BlockRock.item"; } break;
		case eItem_Block_Snow:		{ return "media/gamedata/items/BlockSnow/BlockSnow.item"; } break;
	}

	return "";
}

float GetItemRadiusForType(eItem type)
{
	switch (type)
	{
		case eItem_None:			{ return 1.0f; } break;
		case eItem_DroppedItem:		{ return 1.0f; } break;
		case eItem_Coin:			{ return 0.25f; } break;
		case eItem_Heart:			{ return 0.25f; } break;
		case eItem_Gib:				{ return 0.125f; } break;
		case eItem_Tombstone:		{ return 1.0f; } break;
		case eItem_Chest:			{ return 0.5f; } break;
		case eItem_Torch:			{ return 1.0f; } break;
		case eItem_Furnace:			{ return 0.5f; } break;
		case eItem_Anvil:			{ return 0.5f; } break;
		case eItem_QuestBoard:		{ return 1.0f; } break;
		case eItem_CampFire:		{ return 1.0f; } break;
		case eItem_Mannequin:		{ return 1.0f; } break;
		case eItem_Door:			{ return 1.0f; } break;
		case eItem_Chair:			{ return 1.0f; } break;
		case eItem_Table:			{ return 1.0f; } break;
		case eItem_Bed:				{ return 1.0f; } break;
		case eItem_Portal:			{ return 1.0f; } break;
		case eItem_PortalPillar:	{ return 1.0f; } break;
		case eItem_CopperVein:		{ return 0.5f; } break;
		case eItem_CopperOre:		{ return 1.0f; } break;
		case eItem_CopperBar:		{ return 1.0f; } break;
		case eItem_IronVein:		{ return 0.5f; } break;
		case eItem_IronOre:			{ return 1.0f; } break;
		case eItem_IronBar:			{ return 1.0f; } break;
		case eItem_SilverVein:		{ return 0.5f; } break;
		case eItem_SilverOre:		{ return 1.0f; } break;
		case eItem_SilverBar:		{ return 1.0f; } break;
		case eItem_GoldVein:		{ return 0.5f; } break;
		case eItem_GoldOre:			{ return 1.0f; } break;
		case eItem_GoldBar:			{ return 1.0f; } break;
		case eItem_CropSoil:		{ return 1.0f; } break;
		case eItem_CropWheat:		{ return 1.0f; } break;
		case eItem_CropCorn:		{ return 1.0f; } break;
		case eItem_CropTomato:		{ return 1.0f; } break;
		case eItem_Fence:			{ return 1.0f; } break;
		case eItem_Block_Grass:		{ return 1.0f; } break;
		case eItem_Block_Dirt:		{ return 1.0f; } break;
		case eItem_Block_Stone:		{ return 1.0f; } break;
		case eItem_Block_Wood:		{ return 1.0f; } break;
		case eItem_Block_Leaf:		{ return 1.0f; } break;
		case eItem_Block_Sand:		{ return 1.0f; } break;
		case eItem_Block_Cactus:	{ return 1.0f; } break;
		case eItem_Block_Rock:		{ return 1.0f; } break;
		case eItem_Block_Snow:		{ return 1.0f; } break;
	}

	return 1.0f;
}