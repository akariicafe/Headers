@interface _MRGetVolumeMutedResultMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char isMuted : 1; } _has;
}

@property (nonatomic) BOOL hasIsMuted;
@property (nonatomic) BOOL isMuted;

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
