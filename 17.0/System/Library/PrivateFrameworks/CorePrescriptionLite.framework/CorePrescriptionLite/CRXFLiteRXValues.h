@interface CRXFLiteRXValues : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float sphere;
@property (readonly, nonatomic) float cylinder;
@property (readonly, nonatomic) unsigned long long axis;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSphere:(float)a0 cylinder:(float)a1 axis:(unsigned long long)a2;

@end
