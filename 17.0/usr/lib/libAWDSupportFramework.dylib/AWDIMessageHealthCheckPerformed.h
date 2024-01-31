@interface AWDIMessageHealthCheckPerformed : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _aliasesMatcheds;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _coarseMatcheds;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numMisseds;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numOutOfOrders;
    struct { unsigned char timestamp : 1; unsigned char numMessages : 1; unsigned char numberOfRequests : 1; unsigned char numberOfResponses : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumberOfRequests;
@property (nonatomic) unsigned int numberOfRequests;
@property (nonatomic) BOOL hasNumberOfResponses;
@property (nonatomic) unsigned int numberOfResponses;
@property (nonatomic) BOOL hasNumMessages;
@property (nonatomic) unsigned int numMessages;
@property (readonly, nonatomic) unsigned long long numOutOfOrdersCount;
@property (readonly, nonatomic) unsigned int *numOutOfOrders;
@property (readonly, nonatomic) unsigned long long numMissedsCount;
@property (readonly, nonatomic) unsigned int *numMisseds;
@property (readonly, nonatomic) unsigned long long aliasesMatchedsCount;
@property (readonly, nonatomic) unsigned int *aliasesMatcheds;
@property (readonly, nonatomic) unsigned long long coarseMatchedsCount;
@property (readonly, nonatomic) unsigned int *coarseMatcheds;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCoarseMatched:(unsigned int)a0;
- (void)addNumOutOfOrder:(unsigned int)a0;
- (void)addAliasesMatched:(unsigned int)a0;
- (void)addNumMissed:(unsigned int)a0;
- (void)clearNumMisseds;
- (unsigned int)aliasesMatchedAtIndex:(unsigned long long)a0;
- (void)clearAliasesMatcheds;
- (void)clearCoarseMatcheds;
- (void)clearNumOutOfOrders;
- (unsigned int)coarseMatchedAtIndex:(unsigned long long)a0;
- (unsigned int)numMissedAtIndex:(unsigned long long)a0;
- (unsigned int)numOutOfOrderAtIndex:(unsigned long long)a0;
- (void)setAliasesMatcheds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setCoarseMatcheds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setNumMisseds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setNumOutOfOrders:(unsigned int *)a0 count:(unsigned long long)a1;

@end
