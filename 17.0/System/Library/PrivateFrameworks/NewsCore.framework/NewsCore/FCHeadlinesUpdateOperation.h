@class NSDictionary, NSArray;
@protocol FCCoreConfiguration, FCContentContext;

@interface FCHeadlinesUpdateOperation : FCOperation

@property (copy, nonatomic) NSDictionary *resultHeadlinesByArticleID;
@property (copy, nonatomic) NSArray *headlines;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (nonatomic) double maxArticleAge;
@property (copy, nonatomic) id /* block */ updateCompletion;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
