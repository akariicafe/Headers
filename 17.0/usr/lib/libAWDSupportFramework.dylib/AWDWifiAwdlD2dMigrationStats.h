@interface AWDWifiAwdlD2dMigrationStats : PBCodable <NSCopying> {
    struct { unsigned char rxBytes : 1; unsigned char sessionDuration : 1; unsigned char txBytes : 1; unsigned char avgCCA : 1; unsigned char channel : 1; unsigned char migrationRole : 1; unsigned char peerRssi : 1; unsigned char txFailureCount : 1; } _has;
}

@property (nonatomic) BOOL hasSessionDuration;
@property (nonatomic) unsigned long long sessionDuration;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasRxBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) BOOL hasPeerRssi;
@property (nonatomic) int peerRssi;
@property (nonatomic) BOOL hasTxFailureCount;
@property (nonatomic) unsigned int txFailureCount;
@property (nonatomic) BOOL hasTxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) BOOL hasMigrationRole;
@property (nonatomic) unsigned int migrationRole;
@property (nonatomic) BOOL hasAvgCCA;
@property (nonatomic) unsigned int avgCCA;

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
