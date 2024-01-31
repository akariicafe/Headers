@class NSString, NSArray, QSSUserLanguageProfile;

@interface QSSMutableCreateLanguageProfileRequest : QSSCreateLanguageProfileRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *user_data;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
