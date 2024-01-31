@class LNDisplayRepresentation, LNValueType;

@interface LNValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, copy, nonatomic) id value;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValues:(id)a0 memberValueType:(id)a1;
- (id)initWithValue:(id)a0 valueType:(id)a1;
- (id)initWithValue:(id)a0 valueType:(id)a1 displayRepresentation:(id)a2;

@end
