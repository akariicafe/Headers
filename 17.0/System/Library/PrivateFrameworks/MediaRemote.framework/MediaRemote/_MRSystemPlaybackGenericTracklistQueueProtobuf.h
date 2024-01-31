@class NSString, NSData;

@interface _MRSystemPlaybackGenericTracklistQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char repeatMode : 1; unsigned char shuffleMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFirstTrackIdentifier;
@property (retain, nonatomic) NSString *firstTrackIdentifier;
@property (readonly, nonatomic) BOOL hasTrackIdentifiers;
@property (retain, nonatomic) NSString *trackIdentifiers;
@property (readonly, nonatomic) BOOL hasCollectionIdentifierSet;
@property (retain, nonatomic) NSData *collectionIdentifierSet;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) int repeatMode;

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
- (int)StringAsRepeatMode:(id)a0;
- (int)StringAsShuffleMode:(id)a0;
- (id)repeatModeAsString:(int)a0;
- (id)shuffleModeAsString:(int)a0;

@end
