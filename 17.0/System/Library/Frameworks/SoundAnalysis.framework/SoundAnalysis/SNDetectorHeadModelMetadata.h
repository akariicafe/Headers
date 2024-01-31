@class NSNumber, NSString;

@interface SNDetectorHeadModelMetadata : NSObject <NSCopying>

@property (copy) NSNumber *sampleRate;
@property (copy) NSString *featureExtractorIdentifier;
@property (copy) NSNumber *windowSizeInSamples;
@property (copy) NSNumber *hopSizeInSamples;
@property (copy) NSString *soundIdentifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
