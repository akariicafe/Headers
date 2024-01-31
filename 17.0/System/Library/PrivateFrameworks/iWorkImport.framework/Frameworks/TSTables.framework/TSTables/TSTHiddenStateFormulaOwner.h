@class NSArray;

@interface TSTHiddenStateFormulaOwner : TSPObject

@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (nonatomic) BOOL needsToUpdateFilterSetForImport;
@property (retain, nonatomic) NSArray *thresholdCellValues;

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
