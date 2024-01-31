@class TRIGroupedPredicate;

@interface TRICustomTargetingPredicateLanguage : TRIPBMessage

@property (retain, nonatomic) TRIGroupedPredicate *predicateGroup;
@property (nonatomic) BOOL hasPredicateGroup;

+ (id)descriptor;

@end
