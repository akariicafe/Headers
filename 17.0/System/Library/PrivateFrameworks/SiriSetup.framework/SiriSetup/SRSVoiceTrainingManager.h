@class NSString, SSRVTUITrainingManager;
@protocol SRSTrainingManagerDelegate;

@interface SRSVoiceTrainingManager : NSObject <SSRVTUITrainingManagerDelegate> {
    SSRVTUITrainingManager *_trainingManager;
}

@property (weak, nonatomic) id<SRSTrainingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLanguageCode:(id)a0;
- (void).cxx_destruct;
- (void)stopRMS;
- (void)VTUITrainingManagerFeedLevel:(float)a0;
- (void)cleanupWithCompletion:(id /* block */)a0;
- (void)startRMS;
- (void)trainUtterance:(long long)a0 shouldUseASR:(BOOL)a1 completion:(id /* block */)a2;
- (id)voiceProfile;
- (void)cancelTrainingForSessionId:(long long)a0;
- (long long)convertStatus:(int)a0;

@end
