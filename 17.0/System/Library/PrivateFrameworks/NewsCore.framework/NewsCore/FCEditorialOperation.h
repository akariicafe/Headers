@class NSArray, FCCloudContext, NSError, FCSpotlightOperationResult;
@protocol FCCoreConfiguration;

@interface FCEditorialOperation : FCOperation

@property (copy) NSArray *trendingHeadlines;
@property (copy) NSArray *editorialSectionGroups;
@property (retain) FCSpotlightOperationResult *spotlightResult;
@property (retain) NSError *error;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
