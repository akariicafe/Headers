@class NSString;

@interface ATXMPBBlendingLayoutSelectionTracker : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (readonly, nonatomic) BOOL hasHighestConfidenceCategory;
@property (retain, nonatomic) NSString *highestConfidenceCategory;
@property (readonly, nonatomic) BOOL hasHighestRankingClientModelId;
@property (retain, nonatomic) NSString *highestRankingClientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasExecuableTypeOfHighestRankingSuggestion;
@property (retain, nonatomic) NSString *execuableTypeOfHighestRankingSuggestion;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasHighestRankingClientModelABGroup;
@property (retain, nonatomic) NSString *highestRankingClientModelABGroup;

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

@end
