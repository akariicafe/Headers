@class AVSpeechSynthesizer, NSArray, NSString, CLLocationManager, NSTimer, _MKLocationShifter, CLLocation;

@interface SOSEmergencyCallVoiceLoopManager : NSObject <AVSpeechSynthesizerDelegate, CLLocationManagerDelegate>

@property (nonatomic) long long reason;
@property (nonatomic) long long playbackMode;
@property (retain, nonatomic) AVSpeechSynthesizer *voiceLoopSpeechSynthesizer;
@property (retain, nonatomic) NSArray *voiceLoopUtterances;
@property (retain, nonatomic) NSString *voiceLanguage;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSTimer *messageRepeatTimer;
@property (nonatomic) float playbackVolume;
@property (retain, nonatomic) _MKLocationShifter *locationShifter;
@property (retain, nonatomic) CLLocation *locationToSynthesize;
@property (nonatomic) unsigned long long numberOfLoopsPlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newUtteranceWithText:(id)a0 voice:(id)a1 volume:(float)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (id)_coordinatesStringFromLocation:(id)a0;
- (id)_baseVoiceOverAttributes;
- (id)_introMessageString;
- (id)_languageToUseInVoiceLoopForCountryCode:(id)a0;
- (id)_localizedAttributedStringForKey:(id)a0 forLocalization:(id)a1;
- (id)_localizedStringForKey:(id)a0 forLocalization:(id)a1;
- (id)_localizedStringForKey:(id)a0 forLocalization:(id)a1 tableName:(id)a2;
- (void)_playMessage;
- (void)_playMessageWithLocation;
- (void)_playMessageWithoutLocation;
- (id)_preferredVoiceLanguageForCountryCode:(id)a0;
- (void)_updateLocation:(id)a0;
- (id)initWithReason:(long long)a0 playbackMode:(long long)a1;
- (void)shiftedLocationIfApplicable:(id)a0 withcompletion:(id /* block */)a1;
- (void)startMessagePlayback;
- (void)stopMessagePlayback;

@end
