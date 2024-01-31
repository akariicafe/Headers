@interface AWDSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _reasons;
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long reasonsCount;
@property (readonly, nonatomic) int *reasons;

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
- (void)addReason:(int)a0;
- (void)clearReasons;
- (int)StringAsReasons:(id)a0;
- (int)reasonAtIndex:(unsigned long long)a0;
- (id)reasonsAsString:(int)a0;
- (void)setReasons:(int *)a0 count:(unsigned long long)a1;

@end
