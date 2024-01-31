@class NSString;

@interface RWIDriverConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *driverIdentifier;
@property (copy, nonatomic) NSString *driverName;
@property (copy, nonatomic) NSString *driverVersion;
@property (copy, nonatomic) NSString *driverHost;
@property (nonatomic) long long driverPort;

+ (BOOL)isValidPayload:(id)a0;
+ (id)decodeFromPayload:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToPayload:(id)a0;

@end
