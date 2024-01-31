@class TSKShuffleMapping, NSSet, TSTCellRegion, NSHashTable;

@interface TSTChangeDescriptor : NSObject

@property (nonatomic) int changeDescriptor;
@property (retain, nonatomic) TSTCellRegion *cellRegion;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } cellID;
@property (retain, nonatomic) TSTCellRegion *strokeRegion;
@property (retain, nonatomic) NSHashTable *referenceIdentifiers;
@property (retain, nonatomic) TSKShuffleMapping *shuffleMapping;
@property (retain, nonatomic) NSSet *annotations;
@property (nonatomic) unsigned long long beforeCountValue;
@property (nonatomic) unsigned long long afterCountValue;
@property (readonly, nonatomic) BOOL hasBeforeAfterCounts;
@property (readonly, nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } strokeRange;
@property (readonly, nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } cellRange;
@property (nonatomic) BOOL processedByLayoutEngine;

+ (id)changeDescriptorWithType:(int)a0;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a2;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a2 strokeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a3;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 cellRegion:(id)a2 strokeRegion:(id)a3;
+ (id)changeDescriptorWithType:(int)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 strokeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a2;
+ (id)changeDescriptorWithType:(int)a0 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)changeDescriptorWithType:(int)a0 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 strokeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a2;
+ (id)changeDescriptorWithType:(int)a0 cellRegion:(id)a1;
+ (id)changeDescriptorWithType:(int)a0 cellRegion:(id)a1 strokeRegion:(id)a2;
+ (id)changeDescriptorWithType:(int)a0 referenceIdentifiers:(id)a1;
+ (id)changeDescriptorWithType:(int)a0 strokeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)changeDescriptorWithType:(int)a0 strokeRegion:(id)a1;
+ (id)changeDescriptorWithAnnotationsRemovedForMerge:(id)a0;
+ (id)changeDescriptorWithType:(int)a0 cellRegion:(id)a1 beforeCount:(unsigned long long)a2 afterCount:(unsigned long long)a3;
+ (id)changeDescriptorWithType:(int)a0 cellRegion:(id)a1 strokeRegion:(id)a2 beforeCount:(unsigned long long)a3 afterCount:(unsigned long long)a4;
+ (id)changeDescriptorWithType:(int)a0 shuffleMapping:(id)a1;
+ (void)enumerateChangeRecords:(id)a0 withType:(int)a1 block:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)markAsProcessed;
- (id)initWithChangeDescriptorType:(int)a0 cellRegion:(id)a1 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 strokeRegion:(id)a3 referenceIdentifiers:(id)a4 shuffleMapping:(id)a5;
- (id)initWithChangeDescriptorType:(int)a0 cellRegion:(id)a1 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 strokeRegion:(id)a3 referenceIdentifiers:(id)a4 shuffleMapping:(id)a5 annotations:(id)a6;

@end
