@class NSNumber, NSString;

@interface ASDInstallWebAttributionParamsConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *appAdamId;
@property (retain, nonatomic) NSString *adNetworkRegistrableDomain;
@property (retain, nonatomic) NSString *impressionId;
@property (retain, nonatomic) NSString *sourceWebRegistrableDomain;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long attributionContext;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
