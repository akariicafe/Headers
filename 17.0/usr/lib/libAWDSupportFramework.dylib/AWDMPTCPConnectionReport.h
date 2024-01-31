@class NSString, NSMutableArray;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying> {
    struct { unsigned char establishmentTime : 1; unsigned char postConnectSessionLifetime : 1; unsigned char timestamp : 1; unsigned char establishmentFailureError : 1; unsigned char establishmentSynRetransmits : 1; unsigned char postConnectSubflowAttemptCount : 1; unsigned char postConnectSubflowMaxSubflowCount : 1; unsigned char subflowSwitchingCount : 1; unsigned char establishmentCellularFallback : 1; unsigned char establishmentForcedTcpFallback : 1; unsigned char establishmentSuccess : 1; unsigned char establishmentTcpFallback : 1; unsigned char postConnectMultiHomed : 1; unsigned char postConnectSingleHomed : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) BOOL hasEstablishmentInterfaceName;
@property (retain, nonatomic) NSString *establishmentInterfaceName;
@property (nonatomic) BOOL hasEstablishmentSuccess;
@property (nonatomic) BOOL establishmentSuccess;
@property (nonatomic) BOOL hasEstablishmentFailureError;
@property (nonatomic) int establishmentFailureError;
@property (nonatomic) BOOL hasEstablishmentTcpFallback;
@property (nonatomic) BOOL establishmentTcpFallback;
@property (nonatomic) BOOL hasEstablishmentCellularFallback;
@property (nonatomic) BOOL establishmentCellularFallback;
@property (nonatomic) BOOL hasEstablishmentTime;
@property (nonatomic) double establishmentTime;
@property (nonatomic) BOOL hasEstablishmentSynRetransmits;
@property (nonatomic) int establishmentSynRetransmits;
@property (nonatomic) BOOL hasEstablishmentForcedTcpFallback;
@property (nonatomic) BOOL establishmentForcedTcpFallback;
@property (nonatomic) BOOL hasPostConnectMultiHomed;
@property (nonatomic) BOOL postConnectMultiHomed;
@property (nonatomic) BOOL hasPostConnectSingleHomed;
@property (nonatomic) BOOL postConnectSingleHomed;
@property (nonatomic) BOOL hasPostConnectSubflowAttemptCount;
@property (nonatomic) int postConnectSubflowAttemptCount;
@property (nonatomic) BOOL hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) int postConnectSubflowMaxSubflowCount;
@property (nonatomic) BOOL hasPostConnectSessionLifetime;
@property (nonatomic) double postConnectSessionLifetime;
@property (nonatomic) BOOL hasSubflowSwitchingCount;
@property (nonatomic) int subflowSwitchingCount;
@property (retain, nonatomic) NSMutableArray *interfaceReports;
@property (retain, nonatomic) NSMutableArray *subflowSwitchingReports;

+ (Class)interfaceReportsType;
+ (Class)subflowSwitchingReportsType;

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
- (id)subflowSwitchingReportsAtIndex:(unsigned long long)a0;
- (void)addInterfaceReports:(id)a0;
- (void)addSubflowSwitchingReports:(id)a0;
- (void)clearInterfaceReports;
- (void)clearSubflowSwitchingReports;
- (id)interfaceReportsAtIndex:(unsigned long long)a0;
- (unsigned long long)interfaceReportsCount;
- (unsigned long long)subflowSwitchingReportsCount;

@end
