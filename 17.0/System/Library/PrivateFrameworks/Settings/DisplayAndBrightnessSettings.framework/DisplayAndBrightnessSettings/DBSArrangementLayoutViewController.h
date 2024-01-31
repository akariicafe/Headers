@class DBSNativeDisplayIconView, NSString, DBSArrangementLayoutView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol DBSArrangementLayoutViewControllerDelegate;

@interface DBSArrangementLayoutViewController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long nativeDisplayLocation;
@property (nonatomic) struct CGSize { double width; double height; } nativeDisplaySize;
@property (nonatomic) struct CGSize { double width; double height; } externalDisplaySize;
@property (retain, nonatomic) NSString *nativeDisplayName;
@property (retain, nonatomic) NSString *externalDisplayName;
@property (readonly, nonatomic) DBSArrangementLayoutView *arrangementView;
@property (retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecogniser;
@property (retain, nonatomic) DBSNativeDisplayIconView *dragView;
@property (nonatomic) struct CGPoint { double x; double y; } unitDragPoint;
@property (retain, nonatomic) id<DBSArrangementLayoutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)loadView;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (id)currentDisplayIconView;
- (void)didDrag:(id)a0;
- (id)initWithNativeDisplaySize:(struct CGSize { double x0; double x1; })a0 nativeDisplayName:(id)a1 externalDisplaySize:(struct CGSize { double x0; double x1; })a2 externalDisplayName:(id)a3 currentNativeDisplayLocation:(unsigned long long)a4;
- (id)nativeDisplayImageWithWidth:(double)a0;
- (void)updateOrientationTo:(long long)a0;

@end
