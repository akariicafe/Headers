@class NSString;

@interface AWDIMessageDowngrade : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationBeforeDowngrade : 1; unsigned char isManualDowngrade : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationBeforeDowngrade;
@property (nonatomic) unsigned int durationBeforeDowngrade;
@property (nonatomic) BOOL hasIsManualDowngrade;
@property (nonatomic) unsigned int isManualDowngrade;

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
