@class LAContext, NSDictionary, UIView, NSObject;
@protocol LAUIAuthenticationCoreDelegate;

@interface LAUIAuthenticationCore : NSObject <LAUIDelegate, LAUIAuthentication> {
    BOOL _doneMatching;
    BOOL _doneWatch;
    BOOL _usesInternalContext;
    BOOL _mirroringToDefaultUI;
    long long _lastState;
}

@property (nonatomic) unsigned long long enabledMechanisms;
@property (nonatomic) unsigned long long activeMechanisms;
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (nonatomic, getter=isKeyWindow) BOOL keyWindow;
@property (nonatomic, getter=isUiActive) BOOL uiActive;
@property (retain, nonatomic) LAContext *context;
@property (readonly, nonatomic) NSDictionary *faceIdResult;
@property (weak, nonatomic) NSObject<LAUIAuthenticationCoreDelegate> *delegate;
@property (weak, nonatomic) UIView *view;
@property (readonly, nonatomic) long long biometryType;

+ (void)performBlockOnMainThread:(id /* block */)a0;

- (id)notificationNames;
- (void).cxx_destruct;
- (void)_notification:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)checkView;
- (BOOL)disableMechanism:(unsigned long long)a0 error:(id *)a1;
- (BOOL)enableMechanism:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isMechanismEnabled:(unsigned long long)a0;
- (void)_biometryState:(long long)a0;
- (void)startOrStopBackgroundMechanisms;
- (void)_biometricNoMatchWithBiolockoutError:(id)a0;
- (void)_enableAvailableMechanisms:(unsigned long long)a0;
- (void)_handleBackgroundMechanismsResult:(id)a0 error:(id)a1 context:(id)a2;
- (BOOL)_mechanism:(unsigned long long)a0 enable:(BOOL)a1 error:(id *)a2;
- (id)_optionsForBackgroundMechanism;
- (long long)_policyForBackgroundMechanisms;
- (void)_processActivityChangeForNotification:(id)a0 block:(id /* block */)a1;
- (void)_setupMechanisms:(unsigned long long)a0;
- (void)_setupNotifications:(BOOL)a0;
- (BOOL)_simpleStatusInParams:(id)a0 touchId:(long long)a1 faceId:(long long)a2;
- (void)_startBackgroundMechanisms;
- (void)_stopBackgroundMechanisms;
- (id)initWithMechanisms:(unsigned long long)a0;
- (id)initWithMechanisms:(unsigned long long)a0 context:(id)a1;
- (BOOL)isMechanismActive:(unsigned long long)a0;
- (BOOL)isMechanismAvailable:(unsigned long long)a0 error:(id *)a1;

@end
