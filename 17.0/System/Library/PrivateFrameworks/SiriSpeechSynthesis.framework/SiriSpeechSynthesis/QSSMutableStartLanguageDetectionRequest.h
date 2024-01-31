@class NSString, NSArray;

@interface QSSMutableStartLanguageDetectionRequest : QSSStartLanguageDetectionRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSArray *locales;
@property (nonatomic) long long codec;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
