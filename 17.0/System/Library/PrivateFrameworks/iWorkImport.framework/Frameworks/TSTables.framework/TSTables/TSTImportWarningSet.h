@class NSString;

@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing> {
    struct TSTImportWarningSetCellWarningFlags { unsigned char mCondFormatAboveAvgEqualAverageImportWarning : 1; unsigned char mCondFormatAboveAvgStdDevImportWarning : 1; unsigned char mCondFormatComplexFormulaImportWarning : 1; unsigned char mCondFormatContainsErrorsImportWarning : 1; unsigned char mCondFormatExprImportWarning : 1; unsigned char mCondFormatNotContainsErrorsImportWarning : 1; unsigned char mCondFormatParametersNotAllTheSameTypeImportWarning : 1; unsigned char mCondFormatStopIfTrueImportWarning : 1; unsigned char mCondFormatUnsupportedOperatorImportWarning : 1; unsigned char mCondFormatUnsupportedStylingImportWarning : 1; unsigned char mCondFormatUnsupportedTimePeriodImportWarning : 1; unsigned char mUnsupportedConditionalFormatImportWarning : 1; unsigned char mUnsupportedDataFormatImportWarning : 1; unsigned char mDurationFormatRangeChangedUpgradeWarning : 1; } _cellWarning;
    NSString *_originalDataFormat;
    struct TSTImportFormulaWarning { long long mType; NSString *mOriginalFormula; NSString *mSupplementaryText; } _formulaWarning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyWarningSet;
+ (id)warningSetForErrorTokenFormula:(id)a0;
+ (id)cellDiffClearingAllWarningsWithContext:(id)a0;
+ (id)p_warningSetForFormulaWarningType:(long long)a0 originalFormula:(id)a1 supplementaryText:(id)a2;
+ (id)warningSetFor3DReferenceFormula:(id)a0;
+ (id)warningSetForArrayedFormula:(id)a0;
+ (id)warningSetForCondFormatAboveAvgEqualAvg;
+ (id)warningSetForCondFormatAboveAvgStdDev;
+ (id)warningSetForCondFormatComplexFormula;
+ (id)warningSetForCondFormatContainsErrors;
+ (id)warningSetForCondFormatExpr;
+ (id)warningSetForCondFormatNotContainsErrors;
+ (id)warningSetForCondFormatParamatersNotAllTheSame;
+ (id)warningSetForCondFormatStopIfTrue;
+ (id)warningSetForCondFormatUnsupportedOperator;
+ (id)warningSetForCondFormatUnsupportedStyling;
+ (id)warningSetForCondFormatUnsupportedTimePeriod;
+ (id)warningSetForDifferentBehaviorForFunctionFormula:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForDurationFormatRangeChanged;
+ (id)warningSetForExternalReferenceFormula:(id)a0;
+ (id)warningSetForFilteredColumnFormulaNotCopied;
+ (id)warningSetForFormulaReplacedForExcelCompat:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForNaturalLanguageFormula:(id)a0;
+ (id)warningSetForReferenceOutOfBoundsFormula:(id)a0;
+ (id)warningSetForSharedFormulaBaseNotFoundFormula:(id)a0;
+ (id)warningSetForTransposeUnmodifiedWithIssues;
+ (id)warningSetForTransposedWithIssues:(id)a0;
+ (id)warningSetForTransposedWithoutIssues:(id)a0;
+ (id)warningSetForUnknownName:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForUnsupportedCondFormat;
+ (id)warningSetForUnsupportedDataFormat:(id)a0;
+ (id)warningSetForUnsupportedFormula:(id)a0;
+ (id)warningSetForUnsupportedFunction:(id)a0 originalFormula:(id)a1;
+ (id)warningSetForUnsupportedNameFormula:(id)a0 originalFormula:(id)a1;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0;
- (long long)TSTImportFormulaWarningTypeFromArchive:(int)a0;
- (int)TSTImportFormulaWarningTypeToArchive;
- (BOOL)areAnySet;
- (id)cellDiffClearingWarningsWithContext:(id)a0;
- (id)individualWarnings;
- (id)localizedWarningStrings;
- (BOOL)p_isPersistedWithFormulaWarningTypeEnumeration;
- (unsigned long long)tst_dataObjectHash;
- (BOOL)tst_dataObjectIsEqual:(id)a0;
- (id)warningSetByAddingWarningsFromSet:(id)a0;
- (id)warningSetByRemovingWarningsFromSet:(id)a0;

@end
