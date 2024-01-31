@class NSString, TSCEReferenceSetWrapper, TSCEWrappedRangeRef;

@interface TSCEAnyReference : NSObject {
    struct TSCEAnyRef { unsigned short _refType; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } range; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } rangeRef; unsigned char rangeContext; } _spanningRef; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _uuidValue; BOOL _couldBeIntersection; TSCEReferenceSetWrapper *_refSet; } _ref;
}

@property (copy) NSString *overrideText;
@property (copy) NSString *overrideTextAsTyped;
@property (nonatomic) BOOL wasConstructedViaNames;
@property (readonly, nonatomic) struct TSCEAnyRef { unsigned short x0; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; BOOL x3; id x4; } anyRef;
@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } rangeRef;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) TSCEWrappedRangeRef *rangeReference;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)a0 partial:(BOOL)a1;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)a0 contextSheetName:(id)a1 preserveFlags:(struct TSUPreserveFlags { unsigned char x0; })a2 inputString:(id)a3 inputStringIsComplete:(BOOL)a4;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)a0 hostTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 preserveFlags:(struct TSUPreserveFlags { unsigned char x0; })a2 inputString:(id)a3 inputStringIsComplete:(BOOL)a4;
- (id)referenceTextWithCalculationEngine:(id)a0 contextSheetName:(id)a1;
- (id)referenceTextWithCalculationEngine:(id)a0 hostTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
