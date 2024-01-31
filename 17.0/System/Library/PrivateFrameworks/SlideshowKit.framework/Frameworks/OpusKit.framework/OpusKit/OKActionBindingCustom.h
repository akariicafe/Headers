@class NSString;

@interface OKActionBindingCustom : OKActionBinding

@property (copy, nonatomic) NSString *name;

+ (id)supportedSettings;

- (void)unload;
- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
