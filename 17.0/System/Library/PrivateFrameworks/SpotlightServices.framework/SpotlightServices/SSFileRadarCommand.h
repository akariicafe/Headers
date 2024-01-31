@class SSRankingManager, NSString, NSArray, SPSearchQueryContext;

@interface SSFileRadarCommand : SFCommand

@property (nonatomic) unsigned long long componentID;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (retain, nonatomic) NSString *classification;
@property (retain, nonatomic) NSString *reproducibility;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *problemDescription;
@property (retain, nonatomic) NSArray *extensionIdentifiers;
@property (retain, nonatomic) NSArray *attachmentPaths;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) SSRankingManager *rankingManager;
@property (retain, nonatomic) SPSearchQueryContext *queryContext;

+ (id)buildVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0;
- (id)initWithQueryContext:(id)a0;

@end
