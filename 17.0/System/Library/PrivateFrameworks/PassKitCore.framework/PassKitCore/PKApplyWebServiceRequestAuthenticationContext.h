@class NSArray, NSData;

@interface PKApplyWebServiceRequestAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) NSData *signaturePayload;
@property (copy, nonatomic) NSData *signature;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
