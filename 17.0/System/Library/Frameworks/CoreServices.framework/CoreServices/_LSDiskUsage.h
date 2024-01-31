@class NSNumber, NSString, NSMutableDictionary;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *staticUsage;
@property (readonly, nonatomic) NSNumber *dynamicUsage;
@property (readonly, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, nonatomic) NSNumber *sharedUsage;

+ (id)propertyQueue;
+ (id)ODRUsageForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)ODRConnection;
+ (id)_serverQueue;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)mobileInstallationQueue;

- (BOOL)fetchClientSideWithError:(id *)a0;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (id)init;
- (id)staticUsage;
- (void)encodeWithCoder:(id)a0;
- (id)sharedUsage;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (id)debugDescription;
- (id)onDemandResourcesUsage;
- (id)dynamicUsage;
- (void)removeAllCachedUsageValues;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
