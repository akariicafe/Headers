@class FCNewsTabiRecommendedIssuesUserContextConfiguration, FCNewsTabiRecommendedIssuesInputOutputConfiguration, NSDictionary;

@interface FCNewsTabiRecommendedIssuesConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesUserContextConfiguration *userContextConfiguration;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleInputOutputConfiguration:(id)a0 nonBundleInputOutputConfiguration:(id)a1 userContextConfiguration:(id)a2;

@end
