@class NSString;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectorIdentifier;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })calculateScanRangeForString:(id)a0 changedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })expandValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1;
+ (void)initURLCharacterSets;
+ (id)newArrayByScanningString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)newURLFromString:(id)a0;
+ (id)scanString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)setInvalidURLSchemes:(id)a0;


@end
