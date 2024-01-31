@class NSError;

@interface WFMeasureResult : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) double backhaulThroughput;
@property (copy, nonatomic) NSError *downloadError;
@property (nonatomic) long long gatewayMinRTT;
@property (nonatomic) long long gatewayMaxRTT;
@property (nonatomic) long long gatewayPacketLoss;
@property (nonatomic) long long localDNSMinRTT;
@property (nonatomic) long long localDNSMaxRTT;
@property (nonatomic) long long localDNSPacketLoss;
@property (nonatomic) long long publicDNSMinRTT;
@property (nonatomic) long long publicDNSMaxRTT;
@property (nonatomic) long long publicDNSPacketLoss;
@property (nonatomic) BOOL dnsSuccess;
@property (nonatomic) BOOL backhaulResultsValid;
@property (nonatomic) BOOL gatewayResultsValid;
@property (nonatomic) BOOL localResultsValid;
@property (nonatomic) BOOL publicResultsValid;
@property (nonatomic) BOOL dnsResultsValid;
@property (nonatomic) BOOL seenSpecificAcFailure;
@property (nonatomic) long long trafficClassBEAttemptedSmall;
@property (nonatomic) long long trafficClassBKAttemptedSmall;
@property (nonatomic) long long trafficClassVOAttemptedSmall;
@property (nonatomic) long long trafficClassVIAttemptedSmall;
@property (nonatomic) long long trafficClassBESucceededSmall;
@property (nonatomic) long long trafficClassBKSucceededSmall;
@property (nonatomic) long long trafficClassVOSucceededSmall;
@property (nonatomic) long long trafficClassVISucceededSmall;
@property (nonatomic) long long trafficClassBEAttemptedLarge;
@property (nonatomic) long long trafficClassBKAttemptedLarge;
@property (nonatomic) long long trafficClassVOAttemptedLarge;
@property (nonatomic) long long trafficClassVIAttemptedLarge;
@property (nonatomic) long long trafficClassBESucceededLarge;
@property (nonatomic) long long trafficClassBKSucceededLarge;
@property (nonatomic) long long trafficClassVOSucceededLarge;
@property (nonatomic) long long trafficClassVISucceededLarge;
@property (readonly, nonatomic) long long siriTrafficClass;

+ (void)initialize;

- (unsigned long long)numSmallPingPacketsFailed;
- (unsigned long long)numLargePingPacketsFailed;
- (id)allPrimitiveProperties;
- (unsigned long long)numPingPacketsSuccess;
- (unsigned long long)numPingPacketsFailed;
- (id)statusForInternet;
- (unsigned long long)numSmallPingPacketsSuccess;
- (id)description;
- (unsigned long long)numLargePingPacketsAttempted;
- (id)statusForDNS;
- (unsigned long long)numAcSuccess;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)statusForAcFailure;
- (id)statusForLocal;
- (unsigned long long)numLargePingPacketsSuccess;
- (unsigned long long)numAcFailed;
- (id)typeAsString;
- (unsigned long long)numPingPacketsAttempted;
- (id)binnedProperty:(id)a0;
- (unsigned long long)numSmallPingPacketsAttempted;
- (unsigned long long)numAcAttempted;

@end
