@interface PKStrokeProviderSliceIdentifierConcrete : PKStrokeProviderSliceIdentifier

@property (readonly, nonatomic) struct _PKStrokeID { unsigned int clock; unsigned char replicaUUID[16]; unsigned int subclock; } version;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 version:(struct _PKStrokeID { unsigned int x0; unsigned char x1[16]; unsigned int x2; })a1 tStart:(double)a2 tEnd:(double)a3;

@end
