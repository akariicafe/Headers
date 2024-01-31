@class NSString, NSMutableArray;

@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) BOOL hasStatusChangeType;
@property (retain, nonatomic) NSString *statusChangeType;
@property (retain, nonatomic) NSMutableArray *idsHandles;

+ (Class)idsHandlesType;

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
- (void)clearIdsHandles;
- (unsigned long long)idsHandlesCount;
- (void)addIdsHandles:(id)a0;
- (id)idsHandlesAtIndex:(unsigned long long)a0;

@end
