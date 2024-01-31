@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports> {
    id _label;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)valueForUndefinedKey:(id)a0;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (id)label;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingText:(id)a0;
- (id)settingFontName;
- (float)settingFontSize;
- (id)layoutSettingsKeys;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setSettingFontName:(id)a0;
- (void)setSettingFontSize:(float)a0;
- (void)setSettingTextAlignment:(long long)a0;
- (void)setSettingTextBackgroundColor:(id)a0;
- (void)setSettingTextColor:(id)a0;
- (id)settingText;
- (long long)settingTextAlignment;
- (id)settingTextColor;

@end
