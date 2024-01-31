@class CSSiriAssertionMonitor, NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isRaiseToSpeakBypassed;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor;

+ (id)sharedInstance;

- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (id)init;
- (id)_fetchAssertionMonitor;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)notifyServiceConnectionLost;
- (void).cxx_destruct;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (id)initWithAssertionMonitor:(id)a0;
- (id)fetchVoiceTriggerStats;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;

@end
