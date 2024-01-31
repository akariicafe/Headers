@class NSData, NSMutableArray;

@interface NTPBKeyValueStore : PBCodable <NSCopying> {
    struct { unsigned char clientVersion : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasClientVersion;
@property (nonatomic) long long clientVersion;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly, nonatomic) BOOL hasPlistSidecar;
@property (retain, nonatomic) NSData *plistSidecar;

+ (Class)keyValuePairsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearKeyValuePairs;
- (void)writeTo:(id)a0;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)keyValuePairsCount;
- (void)addKeyValuePairs:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
