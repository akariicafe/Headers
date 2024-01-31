@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (retain, nonatomic) NSMutableArray *modelToCategorys;
@property (retain, nonatomic) NSMutableArray *categoriesByViews;
@property (retain, nonatomic) NSMutableArray *introducersByCategorys;
@property (retain, nonatomic) NSMutableArray *redactions;
@property (retain, nonatomic) NSMutableArray *keyViewMappings;
@property (retain, nonatomic) NSMutableArray *userControllableViews;
@property (retain, nonatomic) NSMutableArray *piggybackViews;
@property (retain, nonatomic) NSMutableArray *priorityViews;
@property (retain, nonatomic) NSMutableArray *inheritedExcludedViews;

+ (Class)categoriesByViewType;
+ (Class)inheritedExcludedViewsType;
+ (Class)introducersByCategoryType;
+ (Class)keyViewMappingType;
+ (Class)modelToCategoryType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)redactionsType;
+ (Class)userControllableViewsType;

- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addKeyViewMapping:(id)a0;
- (void)addPriorityViews:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearModelToCategorys;
- (unsigned long long)introducersByCategorysCount;
- (void)clearKeyViewMappings;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (void)addPiggybackViews:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)piggybackViewsCount;
- (void)clearPiggybackViews;
- (unsigned long long)modelToCategorysCount;
- (void)clearIntroducersByCategorys;
- (void)addCategoriesByView:(id)a0;
- (id)description;
- (void)clearInheritedExcludedViews;
- (void)clearPriorityViews;
- (void)clearUserControllableViews;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (void)addUserControllableViews:(id)a0;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)priorityViewsCount;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)addIntroducersByCategory:(id)a0;
- (unsigned long long)categoriesByViewsCount;
- (void)addRedactions:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (unsigned long long)userControllableViewsCount;
- (void)clearCategoriesByViews;
- (BOOL)isEqual:(id)a0;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (void)clearRedactions;
- (void)mergeFrom:(id)a0;
- (unsigned long long)redactionsCount;
- (unsigned long long)keyViewMappingsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addModelToCategory:(id)a0;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (id)redactionsAtIndex:(unsigned long long)a0;

@end
