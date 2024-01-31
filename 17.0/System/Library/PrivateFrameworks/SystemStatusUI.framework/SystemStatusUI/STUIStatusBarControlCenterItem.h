@class STUIStatusBarIdentifier, STUIStatusBarControlCenterGrabberView;

@interface STUIStatusBarControlCenterItem : STUIStatusBarIndicatorItem

@property (class, readonly) STUIStatusBarIdentifier *grabberIdentifier;

@property (retain, nonatomic) STUIStatusBarControlCenterGrabberView *grabberView;

- (id)indicatorEntryKey;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (id)systemImageNameForUpdate:(id)a0;
- (void)_create_grabberView;
- (Class)imageViewClass;

@end
