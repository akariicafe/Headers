@class NSString, NSArray, NSDictionary;

@interface SNClassificationResult : NSObject <NSCopying, SRSampling, SNTimeRangeProvidingWritable, NSSecureCoding, SNResult> {
    NSArray *_cachedClassifications;
    NSDictionary *_classificationDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (copy, nonatomic) NSString *classifierIdentifier;
@property (readonly, copy) NSArray *classifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)classificationForIdentifier:(id)a0;
- (id)initWithBinarySampleRepresentation:(id)a0;
- (id)initWithClassificationDictionary:(id)a0;

@end
