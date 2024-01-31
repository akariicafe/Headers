@class NSString, QSSUserAcousticProfile;

@interface QSSMutableUpdatedAcousticProfile : QSSUpdatedAcousticProfile

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) QSSUserAcousticProfile *updated_acoustic_profile;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
