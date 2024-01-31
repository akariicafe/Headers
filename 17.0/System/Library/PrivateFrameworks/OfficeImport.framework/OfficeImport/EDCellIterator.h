@class EDRowBlock, EDRowBlocks;

@interface EDCellIterator : NSObject {
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    struct EDCellHeader { unsigned int x0; unsigned int x1; } *mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)adjacentCell:(int)a0;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)adjacentCellLeft;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)adjacentCellRight;
- (id)initWithWorksheet:(id)a0;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)scanToRowNumber:(unsigned int)a0 columnNumber:(unsigned int)a1;

@end
