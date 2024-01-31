@class NSDictionary;

@interface AFSiriAnnounceWorkoutVoiceFeedbackRequest : NSObject <AFSiriExternalRequest> {
    NSDictionary *_data;
}

+ (void)deactivateOngoingRequestWithCompletion:(id /* block */)a0;

- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithVoiceFeedbackData:(id)a0;

@end
