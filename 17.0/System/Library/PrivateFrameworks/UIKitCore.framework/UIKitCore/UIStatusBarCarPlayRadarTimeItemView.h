@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    BOOL _isInternalInstall;
    BOOL _radarItemEnabled;
    BOOL _currentlyGatheringLogs;
}

- (long long)buttonType;
- (void)dealloc;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contentsImage;
- (void)_gatheringLogsDidChangeStatusNotification:(id)a0;
- (BOOL)_showRadarButtonForInternalInstalls;
- (id)_timeImageSet;
- (BOOL)allowsUserInteraction;
- (id)highlightImage;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)usesAdvancedActions;

@end
