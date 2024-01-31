@class NSString, QSSUserLanguageProfile, QSSUserAcousticProfile;

@interface QSSMutableSetSpeechProfile : QSSSetSpeechProfile

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;
@property (copy, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
@property (copy, nonatomic) NSString *language;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
