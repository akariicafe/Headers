@class NSString;

@interface WFPBContextualActionEvent : PBCodable <NSCopying> {
    struct { unsigned char itemCount : 1; unsigned char hasTrackpad : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasHasTrackpad;
@property (nonatomic) BOOL hasTrackpad;
@property (nonatomic) BOOL hasItemCount;
@property (nonatomic) unsigned int itemCount;

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

@end
