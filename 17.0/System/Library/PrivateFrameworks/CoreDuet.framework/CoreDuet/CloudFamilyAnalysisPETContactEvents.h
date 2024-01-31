@class NSMutableArray;

@interface CloudFamilyAnalysisPETContactEvents : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contactEvents;

+ (Class)contactEventType;

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
- (void)addContactEvent:(id)a0;
- (void)clearContactEvents;
- (id)contactEventAtIndex:(unsigned long long)a0;
- (unsigned long long)contactEventsCount;

@end
