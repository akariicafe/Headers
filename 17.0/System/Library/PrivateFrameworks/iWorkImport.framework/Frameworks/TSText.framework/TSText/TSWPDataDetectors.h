@interface TSWPDataDetectors : NSObject

+ (id)calculateScanRanges:(id)a0 changedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)registerDataDetectorClass:(Class)a0;
+ (id)scanString:(id)a0 scanRanges:(id)a1;
+ (BOOL)detectedDataInString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withTextCheckingTypes:(unsigned long long)a2;

@end
