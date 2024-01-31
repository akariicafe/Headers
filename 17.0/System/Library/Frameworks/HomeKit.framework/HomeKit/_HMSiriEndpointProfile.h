@class NSUUID, NSString, NSArray, NSNumber, HMSiriEndpointProfilesMessenger;
@protocol _HMSiriEndpointProfileDelegate;

@interface _HMSiriEndpointProfile : _HMAccessoryProfile <HMFLogging, HMFObject>

@property (retain) HMSiriEndpointProfilesMessenger *messenger;
@property (weak) id<_HMSiriEndpointProfileDelegate> delegate;
@property long long sessionState;
@property (retain) NSUUID *sessionHubIdentifier;
@property (retain) NSString *siriEndpointVersion;
@property (nonatomic) unsigned long long capability;
@property (retain) NSString *siriEngineVersion;
@property (retain) NSNumber *activeIdentifier;
@property (nonatomic) BOOL manuallyDisabled;
@property long long multifunctionButton;
@property (retain) NSArray *assistants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)messageDestination;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)_handleUpdateProfileState:(id)a0;
- (BOOL)_mergeAssistants:(id)a0;
- (void)_registerNotificationHandlers;
- (void)applyOnboardingSelections:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSiriHistoryWithCompletionHandler:(id /* block */)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)notifyClientDidUpdateSessionState;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)setNotifications:(BOOL)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
