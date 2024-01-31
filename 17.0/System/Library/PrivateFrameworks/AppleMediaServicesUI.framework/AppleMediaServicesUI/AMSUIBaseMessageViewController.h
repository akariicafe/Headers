@class NSString, AMSDialogRequest, UIImage, AMSUIMessageView, AMSBinaryPromise, ACAccount, UIImageSymbolConfiguration, UIColor;
@protocol AMSBagProtocol, AMSUIMessageViewControllerDelegate;

@interface AMSUIBaseMessageViewController : UIViewController <MicaPlayerDelegate, AMSUIMessageViewController>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (nonatomic) BOOL didEnqueueMetrics;
@property (nonatomic) long long currentIconPlayCount;
@property (nonatomic) BOOL isImageSymbolImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *_effectiveImageSymbolConfiguration;
@property (nonatomic) BOOL _isLoadingImage;
@property (retain, nonatomic) UIImage *_loadedImage;
@property (readonly, nonatomic) unsigned long long _messageStyle;
@property (readonly, nonatomic) AMSUIMessageView *_messageView;
@property (readonly, nonatomic) UIColor *_messageTextColor;
@property (readonly, nonatomic) long long _primaryImageRenderingMode;
@property (readonly, nonatomic) UIColor *_titleTextColor;
@property (weak, nonatomic) id<AMSUIMessageViewControllerDelegate> delegate;
@property (readonly, nonatomic) AMSDialogRequest *dialogRequest;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (void)enqueueImpressionMetrics;
- (void)_commitAppearance;
- (void)_didTapActionButton:(id)a0;
- (void)_handleDialogResult:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_iconAnimationPlayCount;
- (id)_loadIconAssetWithURL:(id)a0;
- (id)_messageFontCompatibleWith:(id)a0;
- (void)_notifyMetricsFields:(id)a0;
- (void)_preloadImageIfNeeded;
- (void)_resetAndPlayMICAPlayer;
- (void)_setDialogRequest:(id)a0;
- (id)_setImageWithURL:(id)a0;
- (id)_setMICAIconAssetWithURL:(id)a0;
- (void)_startObservingMICAPlayer;
- (id)_titleFontCompatibleWith:(id)a0;
- (void)_updateTextWithAttributes;
- (void)_updateTextWithAttributes:(id)a0;
- (void)enqueueImpressionEngagementMetrics;
- (void)micaPlayerDidChangePlaybackTime:(id)a0 isPlaybackAtEnd:(BOOL)a1;

@end
