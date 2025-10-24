#pragma once
class MemoryPool
{
private:
	// Block�� ʵ���ڴ����� 
	struct MemoryBlock {
		// �ڴ���С
		int nSize;
		// �����ڴ浥Ԫ����
		int nFree;
		// ��һ���ڴ浥Ԫ���
		int nFirst;
		// �ɷ����ڴ�λ��
		void* aData;
	};

	// ��ʼ�ڴ�����
	MemoryBlock* pBlock;

	// �ڴ���������С
	int nUnitSize;

	// ��ʼ�ڴ��С
	int nInitSize;

	// �����ڴ�������С
	int nGrowSize;
};

