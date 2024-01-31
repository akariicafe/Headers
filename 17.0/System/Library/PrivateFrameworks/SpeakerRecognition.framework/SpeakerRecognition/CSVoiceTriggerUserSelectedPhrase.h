@class VTPreferences, NSUUID, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerUserSelectedPhraseDelegate;

@interface CSVoiceTriggerUserSelectedPhrase : NSObject

@property (retain, nonatomic) VTPreferences *vtPrefrences;
@property (retain, nonatomic) NSUUID *endpointDeviceId;
@property (nonatomic) BOOL mphSelected;
@property (nonatomic) unsigned long long uSelectedPhraseType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSVoiceTriggerUserSelectedPhraseDelegate> delegate;

- (id)initWithEndpointId:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isMultiPhrase:(unsigned long long)a0;
- (unsigned long long)_fetchUserSelectedPhraseType;
- (void)_registerForNotification;
- (id)initWithEndpointId:(id)a0 vtPreferences:(id)a1;
- (BOOL)multiPhraseSelected;
- (unsigned long long)userSelectedPhraseType;
- (void)vtPhraseTypeDidChangeNotificationReceived;

@end
