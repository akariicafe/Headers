@class NSString;

@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable <NSCopying> {
    struct { unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char connAttempts : 1; unsigned char connSuccess : 1; unsigned char dnsCompleteFailures : 1; unsigned char dnsPartialFailures : 1; unsigned char epochs : 1; unsigned char faultyStaySecs : 1; unsigned char packetsIn : 1; unsigned char packetsOut : 1; unsigned char secsSinceLastTrimmed : 1; unsigned char timestamp : 1; unsigned char totalStaySecs : 1; unsigned char networkType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasEpochs;
@property (nonatomic) unsigned long long epochs;
@property (nonatomic) BOOL hasTotalStaySecs;
@property (nonatomic) unsigned long long totalStaySecs;
@property (nonatomic) BOOL hasFaultyStaySecs;
@property (nonatomic) unsigned long long faultyStaySecs;
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) BOOL hasSecsSinceLastTrimmed;
@property (nonatomic) unsigned long long secsSinceLastTrimmed;
@property (nonatomic) BOOL hasDnsPartialFailures;
@property (nonatomic) unsigned long long dnsPartialFailures;
@property (nonatomic) BOOL hasDnsCompleteFailures;
@property (nonatomic) unsigned long long dnsCompleteFailures;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
