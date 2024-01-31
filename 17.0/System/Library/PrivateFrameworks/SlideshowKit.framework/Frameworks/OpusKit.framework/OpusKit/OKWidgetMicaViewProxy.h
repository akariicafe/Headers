@class NSString, NSDictionary, OKWidgetMicaDocument;

@interface OKWidgetMicaViewProxy : OKWidgetView <OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports> {
    BOOL _scaleToFit;
    BOOL _autoplay;
    double _duration;
    double _seekToTime;
}

@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) OKWidgetMicaDocument *micaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)valueForUndefinedKey:(id)a0;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)pause;
- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (void)resume;
- (void)restart;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (id)settingObjectForKey:(id)a0;
- (BOOL)settingAutoplay;
- (double)settingDuration;
- (id)settingResource;
- (id)allKeysForDictionaryProxy:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)loadMicaDocumentIfNeeded;
- (void)prepareForRefresh;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setSettingAutoplay:(BOOL)a0;
- (void)setSettingDuration:(double)a0;
- (void)setSettingOptions:(id)a0;
- (void)setSettingResource:(id)a0;
- (void)setSettingScaleToFit:(BOOL)a0;
- (void)setSettingSeekToTime:(double)a0;
- (id)settingOptions;
- (BOOL)settingScaleToFit;
- (double)settingSeekToTime;
- (void)unloadMicaDocument;
- (void)updateMicaDocumentLayer;

@end
