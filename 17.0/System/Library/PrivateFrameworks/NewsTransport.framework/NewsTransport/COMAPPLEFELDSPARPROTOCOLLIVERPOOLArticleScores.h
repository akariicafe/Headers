@class NSMutableArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicCohorts;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;
@property (retain, nonatomic) NSMutableArray *topicCohortScores;

+ (Class)topicCohortsType;
+ (Class)topicCohortScoresType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearTopicCohortScores;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)topicCohortScoresCount;
- (unsigned long long)topicCohortsCount;
- (void).cxx_destruct;
- (id)topicCohortsAtIndex:(unsigned long long)a0;
- (void)addTopicCohortScores:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearTopicCohorts;
- (void)addTopicCohorts:(id)a0;
- (id)topicCohortScoresAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
