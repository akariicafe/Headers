@class NSString;

@interface AWDCompanionSyncFullSyncDuration : PBCodable <NSCopying> {
    struct { unsigned char syncDuration : 1; unsigned char timestamp : 1; unsigned char isMaster : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsMaster;
@property (nonatomic) BOOL isMaster;
@property (nonatomic) BOOL hasSyncDuration;
@property (nonatomic) unsigned long long syncDuration;

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

@end
