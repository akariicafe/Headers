@class TUNeighborhoodActivityConduit;

@interface CPActivityAuthorizationManager : NSObject <CPConversationManagerDataSourceObserver> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ $__lazy_storage_$_neighborhoodActivityConduit;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ appPolicyManager;
    void /* unknown type, empty encoding */ audioRoutePolicyManager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ preparedAuthorizedBundleIdentifiers;
    void /* unknown type, empty encoding */ isDisplayingAuthorizationRequest;
}

@property (nonatomic, retain) TUNeighborhoodActivityConduit *neighborhoodActivityConduit;

+ (id)notificationDisplayInformationForAudioPolicyManager:(id)a0 activity:(id)a1 conversation:(id)a2;

- (void)conversationManager:(id)a0 activityAuthorizationChangedForBundleIdentifier:(id)a1;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 queue:(id)a1;
- (id)initWithDataSource:(id)a0 queue:(id)a1 appPolicyManager:(id)a2;
- (void)requestAuthorizationForApplicationLaunchWithActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAuthorizationForApplicationWithBundleIdentifier:(id)a0 preparing:(BOOL)a1 overrides:(id)a2 completionHandler:(id /* block */)a3;
- (void)setAuthorization:(BOOL)a0 forBundleIdentifier:(id)a1;

@end
