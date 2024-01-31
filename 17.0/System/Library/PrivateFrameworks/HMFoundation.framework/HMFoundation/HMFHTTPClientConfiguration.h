@interface HMFHTTPClientConfiguration : HMFObject <NSCopying>

@property BOOL requiresEncryption;
@property BOOL allowsAnonymousConnection;
@property BOOL allowsCellularAccess;
@property BOOL supportsWakeOnLAN;
@property BOOL monitorsReachability;

+ (id)defaultConfiguration;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
