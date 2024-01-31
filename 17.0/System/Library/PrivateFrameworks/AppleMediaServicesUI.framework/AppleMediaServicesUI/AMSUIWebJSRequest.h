@class NSString, NSDictionary;

@interface AMSUIWebJSRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSString *service;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0 logKey:(id)a1;

@end
