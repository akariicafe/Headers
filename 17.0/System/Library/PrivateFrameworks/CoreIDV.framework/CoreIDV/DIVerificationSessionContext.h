@class NSString, NSDictionary, NSArray;

@interface DIVerificationSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *tier;
@property (readonly, nonatomic) NSString *serviceURL;
@property (readonly, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *regionCode;
@property (nonatomic) unsigned long long invocationReason;
@property (copy, nonatomic) NSArray *preferredLanguages;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 tier:(id)a1 serviceUrl:(id)a2 httpHeaders:(id)a3;

@end
