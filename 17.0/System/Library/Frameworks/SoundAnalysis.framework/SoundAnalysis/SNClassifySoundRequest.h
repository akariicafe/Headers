@class SNTimeDurationConstraint, NSArray, NSString, SNClassifierVariant;

@interface SNClassifySoundRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {
    SNClassifierVariant *_classifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double overlapFactor;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } windowDuration;
@property (readonly) SNTimeDurationConstraint *windowDurationConstraint;
@property (readonly, copy) NSArray *knownClassifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClassifierIdentifier:(id)a0 error:(id *)a1;
- (id)createAnalyzerWithError:(id *)a0;

@end
