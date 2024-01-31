@class NSArray, NSDictionary, NSString, UIView;
@protocol CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate;

@interface CAMFullscreenModeSelector : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic, setter=_setModes:) NSArray *_modes;
@property (retain, nonatomic, setter=_setItems:) NSDictionary *_titleViewsByMode;
@property (readonly, nonatomic) UIView *_titleContainer;
@property (nonatomic, setter=_setState:) long long _state;
@property (nonatomic, setter=_setTouchBeganTime:) double _touchBeganTime;
@property (nonatomic, setter=_setTouchBeganPosition:) struct CGPoint { double x; double y; } _touchBeganPosition;
@property (nonatomic, setter=_setHighlightedIndex:) long long _highlightedIndex;
@property (readonly, nonatomic) double _titleIndexOffset;
@property (nonatomic) id<CAMFullscreenModeSelectorDataSource> dataSource;
@property (nonatomic) id<CAMFullscreenModeSelectorDelegate> delegate;
@property (nonatomic) long long selectedMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reloadData;
- (void)_updateAlpha;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateTitles;
- (void)handlePress:(id)a0;
- (id)_modeTitleForLegacyTitle:(id)a0;
- (void)_selectModeAtIndex:(long long)a0;
- (void)_setSelectedMode:(long long)a0 shouldNotify:(BOOL)a1;
- (long long)_titleIndexForY:(double)a0;
- (double)_titleYForIndex:(long long)a0;
- (void)_touchSequenceBeganAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_touchSequenceChangedToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_touchSequenceEndedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)enterTappableState;

@end
