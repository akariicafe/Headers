@interface AMSRestrictions : NSObject

@property (class, readonly, nonatomic) BOOL allowAccountModifications;
@property (class, readonly, nonatomic) BOOL eroticaAllowed;
@property (class, readonly, nonatomic) BOOL explicitContentAllowed;
@property (class, readonly, nonatomic) BOOL inAppPurchaseAllowed;
@property (class, readonly, nonatomic) long long maximumMediaRank;
@property (class, readonly, nonatomic) BOOL onDeviceDiagnosticsAllowed;
@property (class, readonly, nonatomic, getter=isParentalControlEnabled) BOOL parentalControlEnabled;
@property (class, readonly, nonatomic) BOOL requirePasswordImmediately;

+ (id)rankForMediaType:(unsigned long long)a0;
+ (id)_featureNameForMediaType:(unsigned long long)a0;
+ (long long)explicitContentSettingForBundleID:(id)a0;
+ (BOOL)allowActiveAccountModifications;

@end
