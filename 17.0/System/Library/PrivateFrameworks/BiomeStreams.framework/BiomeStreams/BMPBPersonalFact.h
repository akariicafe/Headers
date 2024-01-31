@class NSString, NSMutableArray;

@interface BMPBPersonalFact : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubjectId;
@property (retain, nonatomic) NSString *subjectId;
@property (readonly, nonatomic) BOOL hasSubjectAlias;
@property (retain, nonatomic) NSString *subjectAlias;
@property (retain, nonatomic) NSMutableArray *subjectIsas;
@property (readonly, nonatomic) BOOL hasPredicateId;
@property (retain, nonatomic) NSString *predicateId;
@property (readonly, nonatomic) BOOL hasObjectId;
@property (retain, nonatomic) NSString *objectId;
@property (readonly, nonatomic) BOOL hasObjectAlias;
@property (retain, nonatomic) NSString *objectAlias;

+ (Class)subjectIsaType;

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
- (void)addSubjectIsa:(id)a0;
- (void)clearSubjectIsas;
- (id)subjectIsaAtIndex:(unsigned long long)a0;
- (unsigned long long)subjectIsasCount;

@end
