@class NSString, NSMutableArray;

@interface BMPBParsecSearchEngagementEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResultId;
@property (retain, nonatomic) NSString *resultId;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasUserInput;
@property (retain, nonatomic) NSString *userInput;
@property (readonly, nonatomic) BOOL hasCompletedQuery;
@property (retain, nonatomic) NSString *completedQuery;
@property (retain, nonatomic) NSMutableArray *entities;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) BOOL hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

+ (Class)entitiesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearEntities;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEntities:(id)a0;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;

@end
