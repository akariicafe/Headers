@class NSString;

@interface QSSMutableTranslationSupportedLanguagesRequest : QSSTranslationSupportedLanguagesRequest

@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
