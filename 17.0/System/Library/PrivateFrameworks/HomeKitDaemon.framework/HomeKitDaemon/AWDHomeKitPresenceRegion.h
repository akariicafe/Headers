@interface AWDHomeKitPresenceRegion : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numPresenceAuthUsers : 1; unsigned char numPresenceRegionValidUsers : 1; unsigned char numUsers : 1; unsigned char primaryResident : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumUsers;
@property (nonatomic) unsigned int numUsers;
@property (nonatomic) BOOL hasNumPresenceAuthUsers;
@property (nonatomic) unsigned int numPresenceAuthUsers;
@property (nonatomic) BOOL hasNumPresenceRegionValidUsers;
@property (nonatomic) unsigned int numPresenceRegionValidUsers;
@property (nonatomic) BOOL hasPrimaryResident;
@property (nonatomic) BOOL primaryResident;

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
