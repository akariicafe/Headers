@class NSString, MTIDCache;
@protocol MTIDSecretStore;

@interface MTFrameworkEnvironment : NSObject {
    NSString *_localDataPath;
    id<MTIDSecretStore> _secretStore;
    MTIDCache *_idCache;
}

@property (class, retain) MTFrameworkEnvironment *sharedEnvironment;

@property (copy, nonatomic) NSString *localDataPath;

+ (void)initialize;
+ (void)withEnvironment:(id)a0 execute:(id /* block */)a1;

- (id)valueForEntitlement:(id)a0;
- (id)date;
- (BOOL)isInternalBuild;
- (void).cxx_destruct;
- (id)dateOfBirthComponents;
- (id)hostProcessBundleIdentifier;
- (id)idCache;
- (id)metricsKitBundleIdentifier;
- (id)secretStore;
- (BOOL)useCloudKitSandbox;

@end
