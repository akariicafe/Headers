@class AFSiriWorkoutReminder;

@interface AFSiriAnnounceWorkoutReminderRequest : NSObject <AFSiriExternalRequest> {
    AFSiriWorkoutReminder *_workoutReminder;
}

+ (void)deactivateRequestForPredictionIdentifier:(id)a0 completion:(id /* block */)a1;

- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithWorkoutReminder:(id)a0;

@end
