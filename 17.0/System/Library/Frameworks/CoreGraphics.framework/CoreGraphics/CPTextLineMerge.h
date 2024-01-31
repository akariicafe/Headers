@class NSMutableArray;

@interface CPTextLineMerge : NSObject {
    NSMutableArray *avail;
}

- (void)addInterval:(id)a0 to:(id)a1;
- (id)findLineFor:(id)a0 in:(id)a1;
- (double)averageHeight:(id)a0;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)a0 in:(id)a1;
- (void)detachDropCaps:(id)a0 to:(id)a1;
- (void)dropCaps:(id)a0 to:(id)a1;
- (void)eliminate:(id)a0;
- (BOOL)fits:(id)a0 into:(id)a1;
- (BOOL)hasOverlappingLines;
- (void)makeOverlappingLinesTo:(id)a0;
- (void)mergeByColumn:(id)a0;
- (void)mergeColumn:(id)a0 overlapping:(id)a1;
- (void)mergeLinesIn:(id)a0;
- (void)mergeLinesInInterval:(id)a0 from:(id)a1;
- (void)removeOverlapping:(id)a0;

@end
