@class GTProcessInfo, GTServiceProperties;

@interface GTProcessService : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GTServiceProperties *serviceProperties;
@property (readonly, nonatomic) GTProcessInfo *processInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithService:(id)a0 processInfo:(id)a1;

@end
