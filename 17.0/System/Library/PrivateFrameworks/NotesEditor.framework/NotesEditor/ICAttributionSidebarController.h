@class NSDate, ICTextViewController, ICNAEventReporter, ICTextView, UIPanGestureRecognizer, ICTTTextEditFilter, ICAttributionSidebarView, NSNumber;

@interface ICAttributionSidebarController : NSObject

@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double attributionSidebarGestureBaselineX;
@property (retain, nonatomic) NSNumber *attributionSidebarGestureBaselineContentOffsetY;
@property (nonatomic) double attributionSidebarGestureAcceptedDistanceX;
@property (nonatomic) double attributionSidebarGestureIgnoredDistanceX;
@property (nonatomic) BOOL attributionSidebarGestureHasBegunToOpen;
@property (retain, nonatomic) NSDate *attributionSidebarGestureStartTime;
@property (readonly, nonatomic) ICNAEventReporter *eventReporter;
@property (retain, nonatomic) ICTextViewController *textViewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long attributionSidebarVisibility;
@property (readonly, nonatomic) ICTextView *textView;
@property (readonly, nonatomic) ICAttributionSidebarView *attributionSidebarView;
@property (copy, nonatomic) ICTTTextEditFilter *filter;
@property (copy, nonatomic) id /* block */ sidebarWidthDidChangeHandler;

+ (id)keyPathsForValuesAffectingAttributionSidebarVisibility;

- (id)init;
- (void)dealloc;
- (id)initWithTextView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)a0;
- (void)cancelActiveGestures;
- (void)hideSidebarAnimated:(BOOL)a0;
- (void)hideSidebarAnimated:(BOOL)a0 contextPath:(long long)a1;
- (void)noteDidUpdateShare:(id)a0;
- (void)setFilter:(id)a0 animated:(BOOL)a1;
- (void)showSidebarAnimated:(BOOL)a0;

@end
