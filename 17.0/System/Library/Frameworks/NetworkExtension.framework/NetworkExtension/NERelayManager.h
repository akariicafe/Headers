@class NSUUID, NSString, NSArray, NEConfiguration;
@protocol NERelayManagerDelegate;

@interface NERelayManager : NSObject <NEPrettyDescription> {
    BOOL _isShared;
    BOOL _hasLoaded;
    BOOL _notificationSent;
    NEConfiguration *_configuration;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) id<NERelayManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic, getter=isFromProfile) BOOL fromProfile;
@property (copy) NSString *localizedDescription;
@property (getter=isEnabled) BOOL enabled;
@property (retain) NSArray *relays;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *onDemandRules;

+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;
+ (void)loadAllManagersFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
