@class NSString, NSMutableArray;

@interface ATXPBLockscreenEvent : PBCodable <NSCopying> {
    double _date;
    NSString *_blendingCacheId;
    int _eventType;
    NSMutableArray *_suggestionIds;
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
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
