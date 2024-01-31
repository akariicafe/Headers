@class NSString, NetworkAnalyticsQueueStatistics, NSSet, NSDate, NSMutableSet;

@interface NetworkAnalyticsStateRelay : NSObject {
    NSMutableSet *_defaultGateways;
}

@property (retain) NSString *interfaceName;
@property unsigned long long interfaceIndex;
@property BOOL active;
@property BOOL primary;
@property BOOL knownGood;
@property BOOL knownSporadic;
@property BOOL knowableSporadic;
@property BOOL firstAttachment;
@property BOOL rxSignalThresholded;
@property BOOL rxSignalFullBars;
@property BOOL txThresholded;
@property BOOL arpOut;
@property BOOL dnsOut;
@property BOOL internetDnsOut;
@property BOOL stuckDefRoute;
@property (nonatomic) unsigned int rxSignalExemptions;
@property int linkQuality;
@property int advisory;
@property unsigned char powerCostDL;
@property unsigned char powerCostUL;
@property unsigned char signalBars;
@property unsigned char radioTechnology;
@property BOOL lqmAsystole;
@property long long loi;
@property BOOL supportsIPv4;
@property BOOL supportsIPv6;
@property int lastReportedSignalToNoiseRatio;
@property int lastReportedRxSignalStrength;
@property unsigned long long lastReportedL2TxFrames;
@property unsigned long long lastReportedL2TxRetry;
@property unsigned long long lastReportedL2TxFail;
@property unsigned long long l2MetricsCount;
@property (retain) NSDate *madePrimaryDate;
@property (retain) NetworkAnalyticsQueueStatistics *queueStatistics;
@property (readonly) unsigned char functionalInterfaceType;
@property (readonly) BOOL constrained;
@property (readonly) BOOL expensive;
@property (readonly) BOOL noCostAdvantage;
@property BOOL tcpExtraStatsPositive;
@property BOOL apsdFailure;
@property unsigned int tcpProgressHintsScore;
@property (readonly) NSSet *defaultGateways;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)addDefaultGateway:(id)a0;
- (void)setConstrained:(BOOL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setExpensive:(BOOL)a0;
- (void)populatePropertiesOnAWDMetric:(id)a0 ingress:(BOOL)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)removeAllDefaultGateways;
- (void)updateSignalStrength:(id)a0;
- (id)description;
- (void)setNoCostAdvantage:(BOOL)a0;
- (void).cxx_destruct;
- (id)initForInternalType:(unsigned char)a0;

@end
