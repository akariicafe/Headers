@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALRequestID, NSMutableArray;

@interface SIRINLUINTERNALSSUSSURequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId;

+ (Class)matchingSpansType;
+ (Class)salientEntitiesType;

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
- (void)addMatchingSpans:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)clearMatchingSpans;
- (void)clearSalientEntities;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)salientEntitiesCount;

@end
