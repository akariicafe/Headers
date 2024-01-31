@class NSUserDefaults, NSDate;

@interface SiriUIPreferences : NSObject {
    NSUserDefaults *_userDefaults;
    long long _numberOfTimesSiriCardShown;
    BOOL _voiceRequestMadeWhileInCarDND;
    NSDate *_previousSiriRequestErrorTimestamp;
    long long _siriRequestErrorCount;
}

+ (id)sharedPreferences;

- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (long long)integerForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setVoiceRequestMadeWhileInCarDND:(BOOL)a0;
- (long long)numberOfTimesCarDNDSiriCardShown;
- (id)previousSiriRequestErrorTimestamp;
- (void)setNumberOfTimesCarDNDSiriCardShown:(long long)a0;
- (void)setPreviousSiriRequestErrorTimestamp:(id)a0;
- (void)setSiriRequestErrorCount:(long long)a0;
- (long long)siriRequestErrorCount;
- (BOOL)voiceRequestMadeWhileInCarDND;

@end
