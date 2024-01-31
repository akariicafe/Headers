@class NSString;

@interface QSSMutableTextToSpeechResource : QSSTextToSpeechResource

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
