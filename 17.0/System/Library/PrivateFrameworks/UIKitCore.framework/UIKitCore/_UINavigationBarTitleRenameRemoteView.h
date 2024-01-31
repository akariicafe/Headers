@class NSString, _UINavigationBarTitleRenamerRemoteSession, _UIPortalView;

@interface _UINavigationBarTitleRenameRemoteView : UIView <_UINavigationBarTitleRenamerContentView> {
    struct { unsigned char needsMetricsUpdate : 1; } _flags;
}

@property (readonly, nonatomic) _UINavigationBarTitleRenamerRemoteSession *session;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;
@property (nonatomic) double horizontalTextInset;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) id /* block */ horizontalTextInsetDidChangeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_disconnect;
- (void)willMoveToWindow:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_connect;
- (void)updateMetrics;
- (void)setNeedsMetricsUpdate;
- (void)updateMetricsIfNeeded;

@end
