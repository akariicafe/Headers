@interface AWDNetworkServiceProxyControlRequestStatistics : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _responseTimeBuckets;
    struct { unsigned char requestCount : 1; unsigned char resultCertificateFailureCount : 1; unsigned char resultConnectionResetCount : 1; unsigned char resultNetworkUnavailableCount : 1; unsigned char resultResponseTimeoutCount : 1; unsigned char resultSendFailureCount : 1; unsigned char resultServerUnreachableCount : 1; unsigned char resultSuccessCount : 1; unsigned char resultUnknownErrorCount : 1; unsigned char timestamp : 1; unsigned char interfaceType : 1; unsigned char protocolType : 1; unsigned char requestType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestCount;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) BOOL hasResultSuccessCount;
@property (nonatomic) unsigned long long resultSuccessCount;
@property (nonatomic) BOOL hasResultNetworkUnavailableCount;
@property (nonatomic) unsigned long long resultNetworkUnavailableCount;
@property (nonatomic) BOOL hasResultServerUnreachableCount;
@property (nonatomic) unsigned long long resultServerUnreachableCount;
@property (nonatomic) BOOL hasResultSendFailureCount;
@property (nonatomic) unsigned long long resultSendFailureCount;
@property (nonatomic) BOOL hasResultResponseTimeoutCount;
@property (nonatomic) unsigned long long resultResponseTimeoutCount;
@property (nonatomic) BOOL hasResultConnectionResetCount;
@property (nonatomic) unsigned long long resultConnectionResetCount;
@property (nonatomic) BOOL hasResultCertificateFailureCount;
@property (nonatomic) unsigned long long resultCertificateFailureCount;
@property (nonatomic) BOOL hasResultUnknownErrorCount;
@property (nonatomic) unsigned long long resultUnknownErrorCount;
@property (readonly, nonatomic) unsigned long long responseTimeBucketsCount;
@property (readonly, nonatomic) unsigned int *responseTimeBuckets;
@property (nonatomic) BOOL hasProtocolType;
@property (nonatomic) int protocolType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)requestTypeAsString:(int)a0;
- (int)StringAsRequestType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsInterfaceType:(id)a0;
- (int)StringAsProtocolType:(id)a0;
- (void)addResponseTimeBuckets:(unsigned int)a0;
- (void)clearResponseTimeBuckets;
- (id)interfaceTypeAsString:(int)a0;
- (id)protocolTypeAsString:(int)a0;
- (unsigned int)responseTimeBucketsAtIndex:(unsigned long long)a0;
- (void)setResponseTimeBuckets:(unsigned int *)a0 count:(unsigned long long)a1;

@end
