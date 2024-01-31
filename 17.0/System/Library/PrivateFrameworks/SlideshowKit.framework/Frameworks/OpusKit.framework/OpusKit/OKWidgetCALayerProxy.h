@class CALayer, NSString, OKWidgetMicaDocument;

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport> {
    OKWidgetMicaDocument *_widgetMicaDocument;
}

@property (readonly, retain, nonatomic) CALayer *layer;
@property (nonatomic) OKWidgetMicaDocument *widgetMicaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyForLayer:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)initWithLayer:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingContents:(id)a0;

@end
