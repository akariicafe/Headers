@class NSString, NSData;

@interface NETSchemaNETSessionConnectionNetwork : SISchemaInstrumentationMessage {
    struct { unsigned char connectionMethod : 1; unsigned char isCaptive : 1; unsigned char rssi : 1; unsigned char snr : 1; unsigned char attempCount : 1; unsigned char firstByteTime : 1; unsigned char startToDNSResolution : 1; unsigned char dnsResolutionTime : 1; unsigned char tlsVersion : 1; unsigned char tlsHandshakeTime : 1; unsigned char connectionEstablishmentTime : 1; unsigned char connectionStartToEstablishmentTime : 1; unsigned char connectionStartToTLSHandshake : 1; unsigned char clearChannelAssessmentScore : 1; } _has;
}

@property (copy, nonatomic) NSString *carrierName;
@property (nonatomic) BOOL hasCarrierName;
@property (nonatomic) int connectionMethod;
@property (nonatomic) BOOL hasConnectionMethod;
@property (copy, nonatomic) NSString *primarySubflowInterfaceName;
@property (nonatomic) BOOL hasPrimarySubflowInterfaceName;
@property (nonatomic) BOOL isCaptive;
@property (nonatomic) BOOL hasIsCaptive;
@property (nonatomic) double rssi;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) double snr;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) unsigned int attempCount;
@property (nonatomic) BOOL hasAttempCount;
@property (nonatomic) unsigned long long firstByteTime;
@property (nonatomic) BOOL hasFirstByteTime;
@property (nonatomic) unsigned long long startToDNSResolution;
@property (nonatomic) BOOL hasStartToDNSResolution;
@property (nonatomic) unsigned long long dnsResolutionTime;
@property (nonatomic) BOOL hasDnsResolutionTime;
@property (nonatomic) int tlsVersion;
@property (nonatomic) BOOL hasTlsVersion;
@property (nonatomic) unsigned long long tlsHandshakeTime;
@property (nonatomic) BOOL hasTlsHandshakeTime;
@property (nonatomic) unsigned long long connectionEstablishmentTime;
@property (nonatomic) BOOL hasConnectionEstablishmentTime;
@property (nonatomic) unsigned long long connectionStartToEstablishmentTime;
@property (nonatomic) BOOL hasConnectionStartToEstablishmentTime;
@property (nonatomic) unsigned long long connectionStartToTLSHandshake;
@property (nonatomic) BOOL hasConnectionStartToTLSHandshake;
@property (nonatomic) double clearChannelAssessmentScore;
@property (nonatomic) BOOL hasClearChannelAssessmentScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCaptive;
- (void)deleteAttempCount;
- (void)deleteCarrierName;
- (void)deleteClearChannelAssessmentScore;
- (void)deleteConnectionEstablishmentTime;
- (void)deleteConnectionMethod;
- (void)deleteConnectionStartToEstablishmentTime;
- (void)deleteConnectionStartToTLSHandshake;
- (void)deleteDnsResolutionTime;
- (void)deleteFirstByteTime;
- (void)deletePrimarySubflowInterfaceName;
- (void)deleteRssi;
- (void)deleteSnr;
- (void)deleteStartToDNSResolution;
- (void)deleteTlsHandshakeTime;
- (void)deleteTlsVersion;

@end
