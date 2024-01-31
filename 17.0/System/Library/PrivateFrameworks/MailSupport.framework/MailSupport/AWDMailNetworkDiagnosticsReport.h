@class NSString;

@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying> {
    struct { unsigned char numActiveCalls : 1; unsigned char numBackgroundWifiClients : 1; unsigned char timestamp : 1; unsigned char dataInterface : 1; unsigned char reachabilityFlags : 1; unsigned char cellData : 1; unsigned char dnsEnabled : 1; unsigned char roamingAllowed : 1; unsigned char wifiEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasReachabilityFlags;
@property (nonatomic) unsigned int reachabilityFlags;
@property (nonatomic) BOOL hasDnsEnabled;
@property (nonatomic) BOOL dnsEnabled;
@property (nonatomic) BOOL hasWifiEnabled;
@property (nonatomic) BOOL wifiEnabled;
@property (nonatomic) BOOL hasDataInterface;
@property (nonatomic) int dataInterface;
@property (nonatomic) BOOL hasCellData;
@property (nonatomic) BOOL cellData;
@property (readonly, nonatomic) BOOL hasDataIndicator;
@property (retain, nonatomic) NSString *dataIndicator;
@property (nonatomic) BOOL hasRoamingAllowed;
@property (nonatomic) BOOL roamingAllowed;
@property (nonatomic) BOOL hasNumActiveCalls;
@property (nonatomic) unsigned long long numActiveCalls;
@property (nonatomic) BOOL hasNumBackgroundWifiClients;
@property (nonatomic) unsigned long long numBackgroundWifiClients;

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

@end
