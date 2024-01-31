@class NSString, _SFTipsCoordinator, UIView, UIViewController;
@protocol SFTipsObserver;

@interface SFTipsCoordinator : NSObject <_SFTipsObserver> {
    _SFTipsCoordinator *_internal;
}

@property (weak, nonatomic) id<SFTipsObserver> observer;
@property (readonly, nonatomic) UIViewController *webSearchTipViewController;
@property (readonly, nonatomic) UIView *webSearchTipView;
@property (readonly, nonatomic) BOOL webSearchTipAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserving;
- (id)init;
- (void)webSearchTipDidBecomeUnavailable;
- (void).cxx_destruct;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;

@end
