@class PKODIServiceProviderAssessment;

@interface PKSavingsAccountAssessmentManager : NSObject {
    long long _type;
    PKODIServiceProviderAssessment *_odiServiceProviderAssessment;
}

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (long long)type;
- (void)provideSessionFeedbackDiscarded;
- (void)_restartODIAssessment;
- (id)_serviceProviderIdentifierForAssessmentType;
- (void)provideSessionFeedbackIngested;
- (void)updateAssessmentType:(long long)a0;
- (void)waitForAssessmentWithCompletion:(id /* block */)a0;

@end
