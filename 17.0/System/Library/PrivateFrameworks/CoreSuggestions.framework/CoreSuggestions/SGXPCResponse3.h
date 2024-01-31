@protocol NSSecureCoding;

@interface SGXPCResponse3 : SGXPCResponse2

@property (readonly, nonatomic) id<NSSecureCoding> response3;

+ (BOOL)supportsSecureCoding;
+ (id)responseWith:(id)a0 also:(id)a1 also:(id)a2;
+ (id)responseWithError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)response1;
- (void).cxx_destruct;
- (id)response2;
- (id)initWithCoder:(id)a0;

@end
