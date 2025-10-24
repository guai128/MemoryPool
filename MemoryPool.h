#pragma once
class MemoryPool
{
private:
	// Block类 实际内存区块 
	struct MemoryBlock {
		// 内存块大小
		int nSize;
		// 空闲内存单元数量
		int nFree;
		// 下一个内存单元序号
		int nFirst;
		// 可分配内存位置
		void* aData;
	};

	// 起始内存区块
	MemoryBlock* pBlock;

	// 内存区块分配大小
	int nUnitSize;

	// 初始内存大小
	int nInitSize;

	// 单次内存增长大小
	int nGrowSize;
};

