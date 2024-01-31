@class TSCECalculationEngine, NSString, TSTCellDictionary, TSTTableInfo;

@interface TSTCategoryAggregateFormulaOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine *_calcEngine;
    TSTTableInfo *_tableInfo;
}

@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTCellDictionary *cellsPendingWrite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)evaluationMode;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)isRegisteredWithCalcEngine:(id)a0;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)unregisterFromCalcEngine;

@end
