@class NSString, NSTimer, _UICollectionTableIndexOverlaySelectionView, UIView, _UICollectionTableIndexOverlayIndicatorView;
@protocol _UICollectionTableIndexOverlayHost;

@interface _UICollectionTableIndexOverlayManager : NSObject {
    UIView<_UICollectionTableIndexOverlayHost> *_host;
    _UICollectionTableIndexOverlayIndicatorView *_indicatorView;
    _UICollectionTableIndexOverlaySelectionView *_selectionView;
    NSTimer *_indicatorHideTimer;
    double _mediaTimeWhenIndicatorWasFirstPresentedInResponseToWheelEvent;
    struct { unsigned char indicatorViewVisible : 1; unsigned char selectionViewVisible : 1; unsigned char ignoringWheelEventsOnIndicator : 1; } _flags;
    NSString *_indexOverlayIndicatorViewText;
}

- (void).cxx_destruct;

@end
