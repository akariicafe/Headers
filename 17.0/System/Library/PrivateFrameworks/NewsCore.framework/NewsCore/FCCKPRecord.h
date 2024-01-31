@class FCCKPDateStatistics, NSString, FCCKPRecordType, FCCKPIdentifier, FCCKPRecordIdentifier, NSMutableArray;

@interface FCCKPRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) FCCKPRecordType *type;
@property (readonly, nonatomic) BOOL hasCreatedBy;
@property (retain, nonatomic) FCCKPIdentifier *createdBy;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (retain, nonatomic) FCCKPDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;
@property (readonly, nonatomic) BOOL hasModifiedBy;
@property (retain, nonatomic) FCCKPIdentifier *modifiedBy;
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;
@property (readonly, nonatomic) BOOL hasModifiedByDevice;
@property (retain, nonatomic) NSString *modifiedByDevice;

+ (Class)conflictLoserEtagsType;
+ (Class)fieldsType;

- (void)addConflictLoserEtags:(id)a0;
- (unsigned long long)hash;
- (void)clearFields;
- (void)addFields:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)conflictLoserEtagsCount;
- (void)clearConflictLoserEtags;
- (unsigned long long)fieldsCount;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
