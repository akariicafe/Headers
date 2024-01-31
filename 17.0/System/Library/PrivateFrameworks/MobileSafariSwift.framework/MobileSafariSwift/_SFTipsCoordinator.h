@class UIViewController, UIView;

@interface _SFTipsCoordinator : NSObject {
    void /* unknown type, empty encoding */ webSearchTipManager;
}

@property (nonatomic, readonly) UIViewController *webSearchTipViewController;
@property (nonatomic, readonly) UIView *webSearchTipView;
@property (nonatomic) void /* unknown type, empty encoding */ webSearchTipAvailable;
@property (nonatomic, weak) void /* unknown type, empty encoding */ observer;

+ (void)configureTipsCenter;

- (void)startObserving;
- (id)init;
- (void).cxx_destruct;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;

@end
