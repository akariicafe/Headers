@class NSData, NSMutableArray;

@interface NPKProtoReserveStorageForAppletTypesRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *appletTypes;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;

+ (Class)appletTypesType;

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
- (void)addAppletTypes:(id)a0;
- (id)appletTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)appletTypesCount;
- (void)clearAppletTypes;

@end
