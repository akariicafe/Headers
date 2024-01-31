@class NSArray, NSMutableDictionary, NSString, NSDictionary;

@interface IMDaemonListener : NSObject <IMDaemonListening_Internal, IMDaemonListening>

@property (readonly, nonatomic, getter=isSetupComplete) BOOL setupComplete;
@property (readonly, nonatomic) BOOL hasPostedSetupComplete;
@property (readonly, nonatomic) NSArray *allServices;
@property (readonly, nonatomic) NSMutableDictionary *_contexts;
@property (nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSDictionary *persistentProperties;
@property (readonly, nonatomic) unsigned long long myStatus;
@property (readonly, nonatomic) NSString *myStatusMessage;
@property (readonly, nonatomic) unsigned int myIdleTime;
@property (readonly, nonatomic) unsigned long long vcCapabilities;
@property (readonly, nonatomic) BOOL shouldHoldChatMessages;
@property (readonly, nonatomic, getter=isHoldingChatMessages) BOOL holdingChatMessages;

- (id)serviceWithName:(id)a0;
- (void)addHandler:(id)a0;
- (id)valueOfProperty:(id)a0;
- (void)holdChatMessages;
- (id)valueOfPersistentProperty:(id)a0;
- (void)releaseHeldChatMessages;
- (void)_setStamp:(id)a0 forContext:(id)a1;
- (void)_resetPostedSetupCompleted;
- (void)removeHandler:(id)a0;
- (id)_stampForContext:(id)a0;

@end
