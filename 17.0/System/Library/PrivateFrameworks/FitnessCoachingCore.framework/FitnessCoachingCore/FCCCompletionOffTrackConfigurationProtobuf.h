@class NSString, NSMutableArray, FCCPercentageOfDayRuleProtobuf;

@interface FCCCompletionOffTrackConfigurationProtobuf : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _allowedGoalTypes;
    struct { unsigned char goalBufferPercentage : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasGoalBufferPercentage;
@property (nonatomic) double goalBufferPercentage;
@property (retain, nonatomic) NSMutableArray *coalescingRules;
@property (readonly, nonatomic) BOOL hasPercentageOfDayRule;
@property (retain, nonatomic) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule;
@property (readonly, nonatomic) unsigned long long allowedGoalTypesCount;
@property (readonly, nonatomic) int *allowedGoalTypes;

+ (Class)coalescingRulesType;

- (void)addAllowedGoalTypes:(int)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)setAllowedGoalTypes:(int *)a0 count:(unsigned long long)a1;
- (void)clearAllowedGoalTypes;
- (int)allowedGoalTypesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addCoalescingRules:(id)a0;
- (id)coalescingRulesAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)coalescingRulesCount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCoalescingRules;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
