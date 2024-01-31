@class SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isInLostMode) BOOL inLostMode;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic) BOOL requiresSetup;
@property (nonatomic) BOOL hasPasscodeSet;
@property (nonatomic) BOOL shouldNeverLock;
@property (nonatomic, getter=isLoginSession) BOOL loginSession;
@property (retain, nonatomic) SBBootDefaults *bootDefaults;
@property (nonatomic, getter=isForSimulator) BOOL forSimulator;
@property (nonatomic, getter=homeButtonType) long long homeButtonType;


@end
