@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowsManualEntry : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *remoteCredentials;
@property (retain, nonatomic) NSMutableArray *credentials;
@property (nonatomic) BOOL hasAllowsManualEntry;
@property (nonatomic) BOOL allowsManualEntry;

+ (Class)credentialsType;
+ (Class)remoteCredentialsType;

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
- (void)addCredentials:(id)a0;
- (void)addRemoteCredentials:(id)a0;
- (void)clearCredentials;
- (void)clearRemoteCredentials;
- (id)credentialsAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialsCount;
- (id)remoteCredentialsAtIndex:(unsigned long long)a0;
- (unsigned long long)remoteCredentialsCount;

@end
