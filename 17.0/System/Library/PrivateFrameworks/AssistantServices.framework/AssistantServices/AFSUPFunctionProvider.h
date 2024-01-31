@class NSString, NSDateFormatter;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldAutomaticallyProvideFunctions;

- (id)init;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)_deviceModel;
- (id)_meCard;
- (id)_userFirstName:(id)a0;
- (id)_callFunction:(id)a0 withArguments:(id)a1;
- (id)_contextDeviceName:(id)a0;
- (id)_contextRoomName:(id)a0;
- (id)_currentLongDate:(id)a0;
- (id)_currentShortDate:(id)a0;
- (id)_currentTime:(id)a0;
- (id)_currentWeekday:(id)a0;
- (id)_dateFormattedWithFormatter:(id)a0 arguments:(id)a1;
- (id)_lowercaseString:(id)a0;
- (id)_meCardIdentifier:(id)a0;
- (id)_peerInfoForContextIdentifier:(id)a0;
- (id)_siriUsageDescription:(id)a0;
- (id)_speechRecognitionUsageDescription:(id)a0;
- (id)_tempInWeatherUnits:(id)a0;
- (id)_userFullName:(id)a0;
- (id)_userLastName:(id)a0;
- (id)_userMiddleName:(id)a0;
- (id)_userNickName:(id)a0;
- (id)stringForExpression:(id)a0;
- (id)stringForExpression:(id)a0 containsPrivacySensitiveContents:(BOOL *)a1;

@end
