@class NSArray, NSString, CACUILanguageViewBridgeController, UIViewController;

@interface CACLanguageSelectionViewController : UIViewController <CACLanguageViewBridgeDelegate>

@property (nonatomic) unsigned long long controllerStyle;
@property (retain, nonatomic) CACUILanguageViewBridgeController *languageViewBridgeController;
@property (retain, nonatomic) UIViewController *languageViewController;
@property (retain, nonatomic) NSArray *availableLocales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultControllerWithStyle:(unsigned long long)a0;

- (void)dismiss;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)selectedLanguageWithIdentifier:(id)a0;
- (void)cacLanguageDownloadStartDownload:(id)a0;
- (void)cacLanguageDownloadStopDownload:(id)a0;
- (void)handleDownloadProgressChange;
- (void)handleErrorOccured:(id)a0;
- (void)languageDidChange;
- (void)updateDownloadProgress;

@end
