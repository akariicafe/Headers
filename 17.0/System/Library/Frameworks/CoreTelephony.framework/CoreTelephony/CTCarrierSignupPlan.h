@class NSString;

@interface CTCarrierSignupPlan : CTPlan

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 url:(id)a1 type:(id)a2;

@end
