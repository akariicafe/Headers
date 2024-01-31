@interface TSKShuffleMapping : NSObject <NSCopying> {
    BOOL mIsVertical;
    BOOL mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}

@property (readonly, nonatomic) unsigned short startIndex;
@property (readonly, nonatomic) unsigned short endIndex;
@property (readonly, nonatomic) unsigned short *mapping;
@property (readonly, nonatomic) unsigned short mappingSize;

- (BOOL)isVertical;
- (void)dealloc;
- (id)initWithStartIndex:(unsigned short)a0 endIndex:(unsigned short)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMove;
- (id)copyInverse;
- (void)enumerateMappingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)a0 destinationIndex:(unsigned short)a1 numberOfIndices:(unsigned short)a2 vertical:(BOOL)a3;
- (id)initWithStartIndex:(unsigned short)a0 endIndex:(unsigned short)a1 mapping:(unsigned short *)a2;
- (void)insert:(unsigned short)a0 indicesAtIndex:(unsigned short)a1 insertingBefore:(BOOL)a2;
- (unsigned short)mapIndex:(unsigned short)a0;
- (unsigned short)mappingSize;
- (void)remove:(unsigned short)a0 indicesAtIndex:(unsigned short)a1;
- (unsigned short)reverseMapIndex:(unsigned short)a0;
- (void)swapIndex:(unsigned short)a0 withIndex:(unsigned short)a1;

@end
