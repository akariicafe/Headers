@class NSString, NSArray;

@interface QSSMutableTextToSpeechSpeechFeatureInputWord : QSSTextToSpeechSpeechFeatureInputWord

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSArray *phonemes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
