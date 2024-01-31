@class NSString, MLModel;

@interface SNComposedDetector : NSObject <NSCopying, NSSecureCoding> {
    NSString *_featureExtractorType;
    MLModel *_detectorHeadModel;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
