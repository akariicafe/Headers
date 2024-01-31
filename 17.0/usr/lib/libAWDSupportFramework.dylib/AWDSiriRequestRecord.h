@class NSMutableArray;

@interface AWDSiriRequestRecord : PBCodable <NSCopying> {
    struct { unsigned char btRetransmissionRateRx : 1; unsigned char btRetransmissionRateTx : 1; unsigned char btRssi : 1; unsigned char btTech : 1; unsigned char endTimestamp : 1; unsigned char expectedThroughputVIBE : 1; unsigned char iRATRecommendationDelay : 1; unsigned char lsmRecommendationBe : 1; unsigned char packetLifetimeVIBE : 1; unsigned char packetLossRateVIBE : 1; unsigned char startTimestamp : 1; unsigned char timeToFirstWord : 1; unsigned char wifiCCA : 1; unsigned char wifiRSSI : 1; unsigned char wifiSNR : 1; unsigned char beaconPer : 1; unsigned char errorCode : 1; unsigned char errorDomain : 1; unsigned char iRATRecommendation : 1; unsigned char idsErrorCode : 1; unsigned char idsMessageDelay : 1; unsigned char idsSocketDelay : 1; unsigned char nwtype : 1; unsigned char requestStatus : 1; unsigned char underlyingErrorCode : 1; unsigned char underlyingErrorDomain : 1; } _has;
}

@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) unsigned long long endTimestamp;
@property (nonatomic) BOOL hasRequestStatus;
@property (nonatomic) int requestStatus;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) int underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) BOOL hasTimeToFirstWord;
@property (nonatomic) unsigned long long timeToFirstWord;
@property (nonatomic) BOOL hasIRATRecommendation;
@property (nonatomic) int iRATRecommendation;
@property (nonatomic) BOOL hasIRATRecommendationDelay;
@property (nonatomic) unsigned long long iRATRecommendationDelay;
@property (retain, nonatomic) NSMutableArray *transportHistorys;
@property (nonatomic) BOOL hasWifiRSSI;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) BOOL hasWifiSNR;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) BOOL hasWifiCCA;
@property (nonatomic) long long wifiCCA;
@property (nonatomic) BOOL hasBeaconPer;
@property (nonatomic) unsigned int beaconPer;
@property (nonatomic) BOOL hasNwtype;
@property (nonatomic) unsigned int nwtype;
@property (nonatomic) BOOL hasLsmRecommendationBe;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) BOOL hasExpectedThroughputVIBE;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) BOOL hasPacketLifetimeVIBE;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) BOOL hasPacketLossRateVIBE;
@property (nonatomic) long long packetLossRateVIBE;
@property (nonatomic) BOOL hasBtRssi;
@property (nonatomic) unsigned long long btRssi;
@property (nonatomic) BOOL hasBtRetransmissionRateTx;
@property (nonatomic) long long btRetransmissionRateTx;
@property (nonatomic) BOOL hasBtRetransmissionRateRx;
@property (nonatomic) long long btRetransmissionRateRx;
@property (nonatomic) BOOL hasBtTech;
@property (nonatomic) long long btTech;
@property (nonatomic) BOOL hasIdsMessageDelay;
@property (nonatomic) unsigned int idsMessageDelay;
@property (nonatomic) BOOL hasIdsSocketDelay;
@property (nonatomic) unsigned int idsSocketDelay;
@property (nonatomic) BOOL hasIdsErrorCode;
@property (nonatomic) unsigned int idsErrorCode;

+ (Class)transportHistoryType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRequestStatus:(id)a0;
- (id)requestStatusAsString:(int)a0;
- (int)StringAsIRATRecommendation:(id)a0;
- (int)StringAsUnderlyingErrorDomain:(id)a0;
- (int)StringAsErrorDomain:(id)a0;
- (void)addTransportHistory:(id)a0;
- (void)clearTransportHistorys;
- (id)errorDomainAsString:(int)a0;
- (id)iRATRecommendationAsString:(int)a0;
- (id)transportHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)transportHistorysCount;
- (id)underlyingErrorDomainAsString:(int)a0;

@end
