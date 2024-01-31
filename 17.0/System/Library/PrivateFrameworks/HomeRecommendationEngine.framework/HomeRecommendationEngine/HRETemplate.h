@class NSString, NSSet;

@interface HRETemplate : NSObject

@property (readonly, nonatomic) Class recommendationClass;
@property (nonatomic) double starterRank;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *rules;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long splitStrategy;
@property (nonatomic) double sortingPriority;
@property (readonly, nonatomic) NSSet *involvedAccessoryTypes;

- (id)init;
- (void).cxx_destruct;
- (id)createStarterRecommendationInHome:(id)a0;

@end
