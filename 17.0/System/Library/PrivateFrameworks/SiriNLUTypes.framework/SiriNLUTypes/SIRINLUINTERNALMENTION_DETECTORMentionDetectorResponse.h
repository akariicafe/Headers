@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *mentions;

+ (Class)mentionsType;

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
- (void)addMentions:(id)a0;
- (void)clearMentions;
- (id)mentionsAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionsCount;

@end
