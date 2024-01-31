@interface CRDataDetectorUtilities : NSObject

+ (unsigned long long)_dataCountOfType:(unsigned long long)a0 inRegions:(id)a1;
+ (unsigned long long)_groupTypeFromChildren:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_mappedUrlificationRangeFor:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withMapping:(id)a1;
+ (id)_personNameFromFullNameString:(id)a0;
+ (id)_personNameLineInRegion:(id)a0;
+ (id)_personNameLineInRegion:(id)a0 defaultLocale:(id)a1;
+ (double)_personNameScoreForFullNameString:(id)a0 locale:(id)a1;
+ (double)_personNameScoreForString:(id)a0 locale:(id)a1;
+ (id)_regionsForTranscript:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 mapping:(id)a2;
+ (BOOL)_shouldGroupAllEntitiesFor:(id)a0 lines:(id)a1;
+ (id)_stringByRemovingNamePrefixes:(id)a0;
+ (id)computeDataDetectorRegionsForText:(id)a0 locale:(id)a1 transcriptComponents:(id)a2;
+ (id)computeGroupRegionsWithDataDetectorRegions:(id)a0 inRegion:(id)a1;
+ (void)debugDataDetectorForRegion:(id)a0 withImage:(id)a1;

@end
