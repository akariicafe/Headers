@class NSString, AVAudioSession;

@interface _MPCAudioSessionController : NSObject

@property (retain, nonatomic) AVAudioSession *audioSession;
@property (retain, nonatomic) id lostObserver;
@property (retain, nonatomic) id resetObserver;
@property (nonatomic) NSString *category;
@property (nonatomic) unsigned long long categoryOptions;
@property (nonatomic) unsigned long long routeSharingPolicy;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)restoreSessionSettingsFromSnapshot;
- (void)setupObservations;
- (void)snapshotSessionSettings;
- (void)tearDownObservations;
- (void)updateAudioSession:(id)a0 options:(unsigned long long)a1 routeSharingPolicy:(unsigned long long)a2;

@end
