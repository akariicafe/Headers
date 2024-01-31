@class NSMutableArray;

@interface WOHealthBridgeProtoPersistenceArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *persistences;

+ (Class)persistencesType;

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
- (void)addPersistences:(id)a0;
- (void)clearPersistences;
- (id)persistencesAtIndex:(unsigned long long)a0;
- (unsigned long long)persistencesCount;

@end
