@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *milestones;
@property (retain, nonatomic) NSMutableArray *measures;
@property (retain, nonatomic) NSMutableArray *macroActivites;

+ (Class)macroActivitesType;
+ (Class)measuresType;
+ (Class)milestonesType;

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
- (void)addMilestones:(id)a0;
- (unsigned long long)milestonesCount;
- (void)clearMilestones;
- (void)addMacroActivites:(id)a0;
- (void)addMeasures:(id)a0;
- (void)clearMacroActivites;
- (void)clearMeasures;
- (id)macroActivitesAtIndex:(unsigned long long)a0;
- (unsigned long long)macroActivitesCount;
- (id)measuresAtIndex:(unsigned long long)a0;
- (unsigned long long)measuresCount;
- (id)milestonesAtIndex:(unsigned long long)a0;

@end
