@class UITapGestureRecognizer, UIImage, NSString;

@interface PXUIFocusTimelineView : PXFocusTimelineView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImage *autoFocusMarkerImage;
@property (nonatomic) long long autoFocusImageInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_handleTap:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)_PXUIFocusTimelineView_commonInit;
- (id)autoFocusEventMarkerImage;
- (id)userInitiatedFocusEventMarkerImage;

@end
