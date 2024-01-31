@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {
    struct { unsigned char connectDuration : 1; unsigned char dnsDuration : 1; unsigned char errorCode : 1; unsigned char httpStatusCode : 1; unsigned char requestDuration : 1; unsigned char responseDuration : 1; unsigned char responseSize : 1; unsigned char startTime : 1; unsigned char cacheState : 1; } _has;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) long long dnsDuration;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) long long connectDuration;
@property (nonatomic) BOOL hasRequestDuration;
@property (nonatomic) long long requestDuration;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) long long responseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) long long responseSize;
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) int cacheState;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) long long httpStatusCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
