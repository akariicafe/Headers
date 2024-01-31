@class NSString;

@interface _PSFeedbackMetricsEventInternal : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ engagedSuggestionId;
    void /* unknown type, empty encoding */ trialExperimentId;
    void /* unknown type, empty encoding */ trialTreatmentId;
    void /* unknown type, empty encoding */ trialDeploymentId;
    void /* unknown type, empty encoding */ timeouts;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *engagedSuggestionId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ airdropOptionPresent;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ visiblePeopleSuggestionCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ visibleAppSuggestionCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ inferenceSource;
@property (nonatomic, readonly) NSString *trialExperimentId;
@property (nonatomic, readonly) NSString *trialTreatmentId;
@property (nonatomic, readonly) NSString *trialDeploymentId;

- (id)init;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 type:(long long)a1 engagedSuggestionId:(id)a2 airdropOptionPresent:(BOOL)a3 visiblePeopleSuggestionCount:(unsigned char)a4 visibleAppSuggestionCount:(unsigned char)a5 inferenceSource:(long long)a6 trialExperimentId:(id)a7 trialTreatmentId:(id)a8 trialDeploymentId:(id)a9 peopleSuggestionsTimeoutOccurred:(BOOL)a10;

@end
