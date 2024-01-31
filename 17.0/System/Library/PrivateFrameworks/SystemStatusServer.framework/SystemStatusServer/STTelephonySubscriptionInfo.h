@class NSString;

@interface STTelephonySubscriptionInfo : NSObject <NSCopying, NSMutableCopying, BSDebugDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *SIMLabel;
@property (readonly, copy, nonatomic) NSString *shortSIMLabel;
@property (readonly, copy, nonatomic) NSString *SIMStatus;
@property (readonly, nonatomic, getter=isHiddenSIM) BOOL hiddenSIM;
@property (readonly, nonatomic) unsigned long long registrationStatus;
@property (readonly, nonatomic) unsigned long long cellularRegistrationStatus;
@property (readonly, nonatomic) unsigned long long dataConnectionType;
@property (readonly, nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections;
@property (readonly, nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection;
@property (readonly, nonatomic, getter=isBootstrap) BOOL bootstrap;
@property (readonly, nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular;
@property (readonly, nonatomic) unsigned long long signalStrengthBars;
@property (readonly, nonatomic) unsigned long long maxSignalStrengthBars;
@property (readonly, copy, nonatomic) NSString *operatorName;
@property (readonly, copy, nonatomic) NSString *lastKnownNetworkCountryCode;
@property (readonly, nonatomic) unsigned long long callForwardingIndicator;
@property (readonly, nonatomic, getter=isNetworkReselectionNeeded) BOOL networkReselectionNeeded;
@property (readonly, nonatomic) long long registrationRejectionCauseCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
