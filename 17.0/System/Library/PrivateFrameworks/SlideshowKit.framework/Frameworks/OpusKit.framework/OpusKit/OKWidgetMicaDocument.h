@class NSString, NSDictionary, NSData, CALayer, OKWidgetMicaView, OKWidgetMicaViewProxy;

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport, NSCopying> {
    OKWidgetMicaView *_widgetMicaView;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *rootDictionary;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (nonatomic) OKWidgetMicaViewProxy *widgetMicaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)publishedObjectWithName:(id)a0;
- (id)publishedObjectNames;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)settingsForKey:(id)a0;
- (void)applySettings:(id)a0 withResolution:(id)a1;
- (double)documentHeight;
- (double)documentWidth;
- (void)loadMicaDocument;

@end
