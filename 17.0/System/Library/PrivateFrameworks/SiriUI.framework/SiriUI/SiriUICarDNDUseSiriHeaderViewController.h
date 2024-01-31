@class NSString, UIImageView, UILabel, SiriUICarDNDContextProvider;
@protocol SiriUICarDNDDelegate;

@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController <SiriUICarDNDContextProviderDelegate> {
    BOOL _localizedSubtitleDisplayedAboveTitle;
}

@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel;
@property (retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel;
@property (retain, nonatomic, getter=_localizedTitle, setter=_setLocalizedTitle:) NSString *localizedTitle;
@property (retain, nonatomic, getter=_localizedSubtitle, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle;
@property (retain, nonatomic, getter=_siriOrbImageView, setter=_setSiriOrbImageView:) UIImageView *siriOrbImageView;
@property (retain, nonatomic, getter=_contextProvider, setter=_setContextProvider:) SiriUICarDNDContextProvider *contextProvider;
@property (weak, nonatomic) id<SiriUICarDNDDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowCarDNDUseSiriHeaderViewController;

- (void)viewDidLoad;
- (void)_setupImageView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setupView;
- (void)_setupSubtitleLabel;
- (void)_setupTitleLabel;
- (void)_sendCardAppearedAnalyticsEvent;
- (void)_addContextProvider;
- (id)_hintContext;
- (void)_removeContextProvider;
- (void)_setupTitleAndSubtitleConstraints;
- (void)contextProvided:(id)a0;

@end
