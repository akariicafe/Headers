@interface SECSFAActionDropEvent : PBCodable <NSCopying> {
    struct { unsigned char excludeCount : 1; unsigned char excludeEvent : 1; } _has;
}

@property (nonatomic) BOOL hasExcludeEvent;
@property (nonatomic) BOOL excludeEvent;
@property (nonatomic) BOOL hasExcludeCount;
@property (nonatomic) BOOL excludeCount;

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
