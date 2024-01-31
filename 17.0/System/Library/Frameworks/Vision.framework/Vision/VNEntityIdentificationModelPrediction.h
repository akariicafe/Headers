@class VNObservation;
@protocol NSSecureCoding, VNEntityIdentificationModelObservation, NSCopying, NSObject;

@interface VNEntityIdentificationModelPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VNObservation<VNEntityIdentificationModelObservation> *observation;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> entityUniqueIdentifier;
@property (readonly) float confidence;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObservation:(id)a0 entityUniqueIdentifier:(id)a1 confidence:(float)a2;

@end
