@class SNComposedDetector, NSString, MLModel;

@interface SNDetectorVariant : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    SNComposedDetector *_composedDetector;
    NSString *_detectorIdentifier;
    MLModel *_endToEndDetectorModel;
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
