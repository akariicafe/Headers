@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying>

@property (nonatomic) int failedPrecondition;
@property (retain, nonatomic) NSMutableArray *passIDs;

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
- (int)StringAsFailedPrecondition:(id)a0;
- (id)passIDsAtIndex:(unsigned long long)a0;
- (void)addPassIDs:(id)a0;
- (void)clearPassIDs;
- (id)failedPreconditionAsString:(int)a0;
- (unsigned long long)passIDsCount;

@end
