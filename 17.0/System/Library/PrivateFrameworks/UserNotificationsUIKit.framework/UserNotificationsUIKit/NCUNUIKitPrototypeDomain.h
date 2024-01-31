@class NCUNUIKitPrototypeSettings;

@interface NCUNUIKitPrototypeDomain : PTDomain

@property (class, readonly, nonatomic) NCUNUIKitPrototypeSettings *rootSettings;

+ (id)domainGroupName;
+ (Class)rootSettingsClass;
+ (id)domainName;

@end
