@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding

@property (retain, nonatomic) NSString *keyPressed;
@property (nonatomic) BOOL isKeyUp;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (void)setSettingIsKeyUp:(BOOL)a0;
- (void)setSettingKeyPressed:(id)a0;

@end
