@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void)_loadBundle;
- (void).cxx_destruct;
- (Class)dataSourceClass;
- (Class)browserClass;
- (Class)bubbleClass;
- (void)setDataSourceClass:(Class)a0;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (void)setBubbleClass:(Class)a0;
- (void)_loadAppBundle;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (void)setBrowserClass:(Class)a0;
- (BOOL)shouldForceIntoSendMenu;

@end
