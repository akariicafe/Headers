@class NSMutableArray;

@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)identifiersType;
+ (Class)passIDsType;

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
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (id)passIDsAtIndex:(unsigned long long)a0;
- (void)addPassIDs:(id)a0;
- (void)clearPassIDs;
- (unsigned long long)passIDsCount;

@end
