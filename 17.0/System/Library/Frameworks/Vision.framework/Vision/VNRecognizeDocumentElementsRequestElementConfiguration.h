@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying>

@property BOOL recognize;
@property BOOL generateSegmentationMask;

+ (id)newConfiguration;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
