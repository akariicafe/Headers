@class PRUISPosterAttachment, PRPosterTitleStyleConfiguration, UIView, BSUIVibrancyEffectView, PRSServerPosterPath;

@interface PRUISPosterAppearanceObservingAttachmentProvider : NSObject {
    PRSServerPosterPath *_path;
    PRPosterTitleStyleConfiguration *_titleStyleConfiguration;
    UIView *_obscurableContentContainerView;
    UIView *_overlayContentView;
}

@property (class, readonly, nonatomic) long long obscurableContentAttachmentLevel;
@property (class, readonly, nonatomic) long long overlayContentAttachmentLevel;

@property (retain, nonatomic) BSUIVibrancyEffectView *obscurableContentVibrancyView;
@property (readonly, nonatomic) UIView *overlayContentView;
@property (readonly, nonatomic) UIView *obscurableContentView;
@property (readonly, nonatomic) UIView *vibrantObscurableContentView;
@property (readonly, nonatomic) PRUISPosterAttachment *obscurableContentAttachment;
@property (readonly, nonatomic) PRUISPosterAttachment *overlayContentAttachment;

- (void).cxx_destruct;
- (void)applyPosterAppearanceToObserver:(id)a0;
- (id)initWithPRSConfiguration:(id)a0;
- (id)initWithPoster:(id)a0;
- (void)_loadTitleStyleConfigurationIfNeeded;
- (void)_updateVibrancyConfigurationWithTitleStyleConfiguration:(id)a0;

@end
