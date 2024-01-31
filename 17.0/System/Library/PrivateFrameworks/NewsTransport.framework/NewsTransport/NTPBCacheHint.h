@class NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {
    struct { unsigned char accessTime : 1; unsigned char lifetime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasLifetime;
@property (nonatomic) int lifetime;
@property (nonatomic) BOOL hasAccessTime;
@property (nonatomic) unsigned long long accessTime;

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
