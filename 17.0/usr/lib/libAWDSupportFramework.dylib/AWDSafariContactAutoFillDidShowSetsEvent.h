@interface AWDSafariContactAutoFillDidShowSetsEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char isShowingMeCardSets : 1; unsigned char isShowingPreviouslyCustomizedSet : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsShowingMeCardSets;
@property (nonatomic) BOOL isShowingMeCardSets;
@property (nonatomic) BOOL hasIsShowingPreviouslyCustomizedSet;
@property (nonatomic) BOOL isShowingPreviouslyCustomizedSet;

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
