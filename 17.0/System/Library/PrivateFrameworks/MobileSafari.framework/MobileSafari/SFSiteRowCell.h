@class NSString, _UIVisualEffectBackdropView, UIVisualEffectView, UILabel;

@interface SFSiteRowCell : UICollectionViewCell <WBSStartPageListItemProxy> {
    UIVisualEffectView *_backgroundEffectView;
    UILabel *_label;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) _UIVisualEffectBackdropView *backdropCaptureView;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
