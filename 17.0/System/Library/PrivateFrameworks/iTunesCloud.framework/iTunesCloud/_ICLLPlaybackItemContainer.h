@class NSString;

@interface _ICLLPlaybackItemContainer : PBCodable <NSCopying> {
    NSString *_containerId;
    NSString *_featureName;
    NSString *_mediaId;
    NSString *_stationHash;
    int _type;
    struct { unsigned char type : 1; } _has;
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
