@class NSString;

@interface MIPGenre : PBCodable <NSCopying> {
    struct { unsigned char persistentId : 1; unsigned char storeId : 1; } _has;
}

@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) long long persistentId;

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
