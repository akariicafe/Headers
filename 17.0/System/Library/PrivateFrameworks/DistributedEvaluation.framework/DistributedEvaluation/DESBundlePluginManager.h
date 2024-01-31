@class NSString, DESRecipeEvaluationSession;
@protocol DESRecipeEvaluation;

@interface DESBundlePluginManager : NSObject <DESPluginManaging> {
    id<DESRecipeEvaluation> _evaluator;
    DESRecipeEvaluationSession *_recipeEvaluation;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginManagerForBundleId:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)stopWithCompletion:(id /* block */)a0;
- (id)telemetryWithRecordSet:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 DESRecipeEvaluationObject:(id)a1;
- (id)performDodMLTask:(id)a0 outError:(id *)a1;
- (BOOL)shouldDownloadURL:(id)a0 forTask:(id)a1;

@end
