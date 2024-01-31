@class NSString, UIColor, UIView;
@protocol SUWebViewDelegate;

@interface SUWebView : UIWebView {
    BOOL _isPinned;
    UIColor *_originalBackgroundColor;
    char _originalShowsBackgroundShadow;
    double _pinnedHeaderInsetAdjustment;
    UIView *_pinnedHeaderView;
    unsigned char _scrollingDisabled : 1;
    long long _synchronousLayoutCount;
}

@property (nonatomic) id<SUWebViewDelegate> delegate;
@property (nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL showsTopBackgroundShadow;
@property (retain, nonatomic) UIColor *topBackgroundColor;
@property (readonly, nonatomic) id windowScriptObject;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setRichTextReaderViewportSettings;
- (void)view:(id)a0 didSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 oldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)loadArchive:(id)a0;
- (void)_setPinnedHeaderView:(id)a0 withTopInsetAdjustment:(double)a1;
- (void)beginSynchronousLayout;
- (void)endSynchronousLayout;
- (BOOL)getStatusBarStyle:(long long *)a0;

@end
