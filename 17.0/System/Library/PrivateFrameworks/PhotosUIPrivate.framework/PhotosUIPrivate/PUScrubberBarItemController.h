@class UIBarButtonItem, PUScrubberView, PUBrowsingSession;

@interface PUScrubberBarItemController : NSObject {
    PUScrubberView *_scrubberView;
}

@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (readonly, nonatomic) UIBarButtonItem *scrubberBarButtonItem;

- (void).cxx_destruct;
- (void)_invalidateScrubberBarButtonItem;
- (void)_updateScrubberBarButtonItemIfNeeded;

@end
