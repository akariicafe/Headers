@interface WiFiAnalyticsAWDWiFiNWActivityOMI : PBCodable <NSCopying> {
    struct { unsigned char chBWAck : 1; unsigned char chBWReq : 1; unsigned char completionDelay : 1; unsigned char dLResoundAck : 1; unsigned char dLResoundReq : 1; unsigned char eRSUAck : 1; unsigned char eRSUReq : 1; unsigned char retries : 1; unsigned char rxNSSAck : 1; unsigned char rxNSSReq : 1; unsigned char scheduled : 1; unsigned char success : 1; unsigned char txNSTSAck : 1; unsigned char txNSTSReq : 1; unsigned char uLMUAck : 1; unsigned char uLMUReq : 1; } _has;
}

@property (nonatomic) BOOL hasScheduled;
@property (nonatomic) unsigned int scheduled;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) BOOL hasRetries;
@property (nonatomic) unsigned int retries;
@property (nonatomic) BOOL hasCompletionDelay;
@property (nonatomic) unsigned int completionDelay;
@property (nonatomic) BOOL hasULMUReq;
@property (nonatomic) unsigned int uLMUReq;
@property (nonatomic) BOOL hasULMUAck;
@property (nonatomic) unsigned int uLMUAck;
@property (nonatomic) BOOL hasTxNSTSReq;
@property (nonatomic) unsigned int txNSTSReq;
@property (nonatomic) BOOL hasTxNSTSAck;
@property (nonatomic) unsigned int txNSTSAck;
@property (nonatomic) BOOL hasRxNSSReq;
@property (nonatomic) unsigned int rxNSSReq;
@property (nonatomic) BOOL hasRxNSSAck;
@property (nonatomic) unsigned int rxNSSAck;
@property (nonatomic) BOOL hasChBWReq;
@property (nonatomic) unsigned int chBWReq;
@property (nonatomic) BOOL hasChBWAck;
@property (nonatomic) unsigned int chBWAck;
@property (nonatomic) BOOL hasERSUReq;
@property (nonatomic) unsigned int eRSUReq;
@property (nonatomic) BOOL hasERSUAck;
@property (nonatomic) unsigned int eRSUAck;
@property (nonatomic) BOOL hasDLResoundReq;
@property (nonatomic) unsigned int dLResoundReq;
@property (nonatomic) BOOL hasDLResoundAck;
@property (nonatomic) unsigned int dLResoundAck;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
