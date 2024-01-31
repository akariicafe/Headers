@class AKTouchOutsideViewGestureRecognizer, NSString, AKPageController, AKAnnotation, UIView, AKAnnotationTheme, IMTheme;
@protocol AKAnnotationEditorDelegate;

@interface AKAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AKPopoverAnnotationEditor> {
    AKTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    id mObserver;
}

@property (retain, nonatomic) UIView *presentationView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationRect;
@property (weak, nonatomic) id<AKAnnotationEditorDelegate> delegate;
@property (nonatomic) int position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AKAnnotation *annotation;
@property (retain, nonatomic) AKPageController *annotationPageController;
@property (retain, nonatomic) AKAnnotationTheme *annotationTheme;
@property (nonatomic) BOOL editsOnLaunch;
@property (retain, nonatomic) IMTheme *theme;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)hide;
- (void)didShow;
- (void)willShow;
- (void)didHide;
- (BOOL)canPresentInPosition:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_containerFrameForView:(id)a0;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)releaseOutlets;
- (void)willHide;
- (int)willPresentInPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;

@end
