@class NSString;

@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *SIMLabel;
@property (copy, nonatomic) NSString *shortSIMLabel;
@property (copy, nonatomic) NSString *SIMStatus;
@property (nonatomic, getter=isHiddenSIM) BOOL hiddenSIM;
@property (nonatomic) unsigned long long registrationStatus;
@property (nonatomic) unsigned long long cellularRegistrationStatus;
@property (nonatomic) unsigned long long dataConnectionType;
@property (nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections;
@property (nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection;
@property (nonatomic, getter=isBootstrap) BOOL bootstrap;
@property (nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (nonatomic) unsigned long long maxSignalStrengthBars;
@property (copy, nonatomic) NSString *operatorName;
@property (copy, nonatomic) NSString *lastKnownNetworkCountryCode;
@property (nonatomic) unsigned long long callForwardingIndicator;
@property (nonatomic, getter=isNetworkReselectionNeeded) BOOL networkReselectionNeeded;
@property (nonatomic) long long registrationRejectionCauseCode;

- (void)setPreferredForDataConnections:(BOOL)a0;
- (void)setMaxSignalStrengthBars:(unsigned long long)a0;
- (void)setBootstrap:(BOOL)a0;
- (void)setRegisteredWithoutCellular:(BOOL)a0;
- (void)setSignalStrengthBars:(unsigned long long)a0;
- (void)setRegistrationStatus:(unsigned long long)a0;
- (void)setProvidingDataConnection:(BOOL)a0;
- (void)setOperatorName:(id)a0;
- (void)setLastKnownNetworkCountryCode:(id)a0;
- (void)setNetworkReselectionNeeded:(BOOL)a0;
- (void)setCellularRegistrationStatus:(unsigned long long)a0;
- (void)setSIMLabel:(id)a0;
- (void)setDataConnectionType:(unsigned long long)a0;
- (void)setIdentifier:(id)a0;
- (void)setShortSIMLabel:(id)a0;
- (void)setCallForwardingIndicator:(unsigned long long)a0;
- (void)setRegistrationRejectionCauseCode:(long long)a0;
- (void)setSIMStatus:(id)a0;
- (void)setHiddenSIM:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
