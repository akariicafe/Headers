@class NSString, NSSet;

@interface _PSAppSuggestionsMetricsInferenceEventInternal : ReportingPlugin.PeopleSuggestionInference {
    void /* unknown type, empty encoding */ suggestions;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *suggestions;

- (void).cxx_destruct;
- (id)initWithId:(id)a0 sourceBundleId:(id)a1 suggestions:(id)a2;

@end
