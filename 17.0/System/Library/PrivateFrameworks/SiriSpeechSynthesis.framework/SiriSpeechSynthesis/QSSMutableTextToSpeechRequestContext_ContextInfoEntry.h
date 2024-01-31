@class NSString;

@interface QSSMutableTextToSpeechRequestContext_ContextInfoEntry : QSSTextToSpeechRequestContext_ContextInfoEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
