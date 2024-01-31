@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {
    TSUIntegerKeyDictionary *mDict;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mDictRWLock;
}

- (id)init;
- (void)dealloc;
- (id)allCells;
- (void)applyBlockToAllCells:(id /* block */)a0;
- (id)cellAtCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (void)removeAllCells;
- (void)setCell:(id)a0 atCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;

@end
