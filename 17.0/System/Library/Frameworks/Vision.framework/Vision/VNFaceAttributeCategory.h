@class NSArray, VNClassificationObservation;

@interface VNFaceAttributeCategory : NSObject <VNObjectCloning, NSSecureCoding, NSCopying, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNClassificationObservation *label;
@property (copy, nonatomic) NSArray *allLabelsWithConfidences;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_computeLabel;
- (id)initWithRequestRevision:(unsigned long long)a0;
- (id)vn_cloneObject;

@end
