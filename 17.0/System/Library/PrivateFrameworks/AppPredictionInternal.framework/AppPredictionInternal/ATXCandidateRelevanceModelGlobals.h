@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (int)maxCategoricalFeaturesCount;
- (BOOL)isPipelineEnabled;
- (void).cxx_destruct;

@end
