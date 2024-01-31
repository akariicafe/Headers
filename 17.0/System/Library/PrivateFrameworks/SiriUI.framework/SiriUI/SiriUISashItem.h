@interface SiriUISashItem : SiriSharedUISashItem {
    BOOL _canPunchout;
}

@property (nonatomic, setter=_setDefault:) BOOL isDefault;

+ (id)_languageCode;
+ (id)defaultSashItem;
+ (void)_setLanguageCode:(id)a0;

- (id)initWithExtension:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (BOOL)canPunchout;

@end
