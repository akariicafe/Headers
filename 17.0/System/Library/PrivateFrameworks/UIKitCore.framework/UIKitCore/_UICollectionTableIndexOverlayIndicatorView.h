@class NSString, UILabel, UITapGestureRecognizer;
@protocol _UICollectionTableIndexOverlayHost;

@interface _UICollectionTableIndexOverlayIndicatorView : UIView {
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id<_UICollectionTableIndexOverlayHost> _host;
}

@property (copy, nonatomic) NSString *currentText;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithHost:(id)a0;
- (void)_tapGestureChanged:(id)a0;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;

@end
