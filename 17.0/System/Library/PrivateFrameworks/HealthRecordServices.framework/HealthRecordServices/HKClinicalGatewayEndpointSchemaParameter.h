@class NSString, NSArray;

@interface HKClinicalGatewayEndpointSchemaParameter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *param;
@property (readonly, copy, nonatomic) NSString *literal;
@property (readonly, copy, nonatomic) NSString *variable;
@property (readonly, copy, nonatomic) NSArray *mode;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParam:(id)a0 literal:(id)a1 variable:(id)a2 mode:(id)a3;

@end
