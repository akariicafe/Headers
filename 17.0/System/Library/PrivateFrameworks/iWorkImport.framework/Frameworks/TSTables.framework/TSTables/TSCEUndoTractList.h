@class NSMutableArray;

@interface TSCEUndoTractList : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray *_tracts;
}

@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0;
- (int)flatteningDimension;
- (void)appendUidTract:(id)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })columnHeaderUid;
- (id)activeUidTract;
- (void)addRowColumnRuleValuePair:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 valueUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)addToExcludedTractUids:(const void *)a0 isRows:(BOOL)a1;
- (void)addToExcludedUidsTractColumnUids:(const void *)a0;
- (void)addToExcludedUidsTractRowUids:(const void *)a0;
- (void)addToIncludedUidsTractColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 rowUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)addToIncludedUidsTractColumnUids:(const void *)a0 rowUids:(const void *)a1;
- (void)addToIncludedUidsTractColumnUids:(const void *)a0 rowUids:(const void *)a1 isRangeRef:(BOOL)a2 preserveRectangularRange:(BOOL)a3;
- (void)addTractAtFront:(id)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })aggregateRuleUid;
- (void)dropTract:(id)a0;
- (void)enumerateRowColumnRuleValuePairsUsingBlock:(id /* block */)a0;
- (id)excludedUidsTract;
- (id)firstTractWithPurpose:(unsigned char)a0;
- (BOOL)hasFullTupleInformation;
- (id)includedUidsTract;
- (id)initAsFullTupleForColumnHeaderUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 rowHeaderUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 aggregateRuleUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2 flatteningDimension:(int)a3;
- (id)preMergeUidTract;
- (id)preMoveRegionUidTract;
- (void)pruneMergeUidTractsAtAndAboveIndex:(unsigned char)a0;
- (BOOL)remapUsingColumnUidMap:(const void *)a0 rowUidMap:(const void *)a1 clearIfMissing:(BOOL)a2;
- (BOOL)remapUsingUidMap:(const void *)a0;
- (void)removeFromExcludedUidsTractColumnUids:(const void *)a0;
- (void)removeFromExcludedUidsTractColumnUidsSet:(const void *)a0;
- (void)removeFromExcludedUidsTractRowUids:(const void *)a0;
- (void)removeFromExcludedUidsTractRowUidsSet:(const void *)a0;
- (id)removedByMoveUidTract;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })rowHeaderUid;
- (unsigned char)tractCount;
- (id)uidTractAtIndex:(unsigned char)a0;

@end
