@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {
    struct { unsigned char lastAccessed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSData *key;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) BOOL hasLastAccessed;
@property (nonatomic) unsigned long long lastAccessed;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
