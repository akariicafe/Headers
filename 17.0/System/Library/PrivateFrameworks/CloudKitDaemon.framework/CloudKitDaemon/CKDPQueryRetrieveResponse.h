@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

- (unsigned long long)hash;
- (unsigned long long)queryResultsCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addQueryResults:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearQueryResults;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
