@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm

@property long long indexType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (Class)faceModelClass;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
