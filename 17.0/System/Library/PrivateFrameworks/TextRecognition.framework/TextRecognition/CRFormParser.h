@interface CRFormParser : NSObject

+ (id)supportedLanguages;
+ (id)_labelRegionForField:(id)a0 inRegions:(id)a1;
+ (id)_keywordMapForPriorityKeywords:(BOOL)a0;
+ (id)_orderedGroupsWithFields:(id)a0 lines:(id)a1;
+ (id)_groupSegmentedFieldsInAlignedFields:(id)a0;
+ (id)_groupSegmentedFieldsInFields:(id)a0;
+ (BOOL)_isRegion:(id)a0 segmentedBoxLeftOfRegion:(id)a1 withTolerance:(double)a2 modalWidth:(double)a3 modelGap:(double)a4;
+ (struct vector<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>, std::allocator<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>>> { void *x0; void *x1; struct __compressed_pair<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *> *, std::allocator<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>>> { void *x0; } x2; })_labelRegionsForField:(id)a0 inRegions:(id)a1;
+ (unsigned long long)_nonStructuralContentTypeFromType:(unsigned long long)a0;
+ (void)_parseFields:(id)a0 regions:(id)a1 shouldUpdateExternalFields:(BOOL)a2 localeCounts:(id)a3;
+ (id)_parseLabelForField:(id)a0 regions:(id)a1 associatedLabels:(id)a2 labelRegions:(void *)a3;
+ (unsigned long long)_predictAndAssignContentTypeForField:(id)a0 labelRegion:(id)a1 labelRegions:(const void *)a2 regions:(id)a3 shouldUpdateExternalFields:(BOOL)a4 localeCounts:(id)a5;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfFirstSegmentedFieldGroupInFields:(id)a0 startIndex:(long long)a1 modalWidth:(double)a2 modelGap:(double)a3;
+ (BOOL)_shouldPredictContentTypeForLabel:(id)a0 locale:(id)a1;
+ (id)_subarrayOfContextTypes:(id)a0 beginIndex:(long long)a1 count:(long long)a2;
+ (id)_useKeywordTypes;
+ (id)convertDetectedFields:(id)a0;
+ (double)globalLineHeightInDocument:(id)a0;
+ (id)horizontalClustersFromFields:(id)a0;
+ (id)lookupLanguagesForLanguage:(id)a0;
+ (id)parseFieldsInDocument:(id)a0 allFields:(id)a1 shouldUpdateExternalFields:(BOOL)a2;
+ (unsigned long long)predictContentTypeForField:(id)a0 labelRegions:(const void *)a1 locale:(id)a2 keyword:(id *)a3 matchedResult:(unsigned long long *)a4;
+ (unsigned long long)predictContentTypeWithKeywordMatching:(id)a0 locale:(id)a1 keyword:(id *)a2 withPriorityKeywords:(BOOL)a3;
+ (id)predictLineHeightForFields:(id)a0 inDocument:(id)a1 shouldUpdateExternalFields:(BOOL)a2;

@end
