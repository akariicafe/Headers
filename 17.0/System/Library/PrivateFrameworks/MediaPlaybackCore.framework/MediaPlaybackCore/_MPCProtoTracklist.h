@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    NSMutableArray *_accountInfos;
    NSMutableArray *_containers;
    int _shuffleMode;
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;
    struct { unsigned char shuffleMode : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
