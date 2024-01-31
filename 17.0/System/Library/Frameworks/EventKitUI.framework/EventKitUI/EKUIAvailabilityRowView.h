@class NSArray, EKParticipant, UIActivityIndicatorView, NSDate, NSMutableArray;

@interface EKUIAvailabilityRowView : UIView {
    NSMutableArray *_spanViews;
    UIActivityIndicatorView *_activityIndicator;
    NSDate *_startOfDay;
    NSMutableArray *_spans;
}

@property (readonly) EKParticipant *participant;
@property (readonly) NSArray *spans;
@property (readonly) BOOL isLoading;

+ (double)cornerRadius;
+ (double)padInset;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0;
- (void)updateSpanViews;
- (void)addToSpans:(id)a0;
- (void)completedLoad;
- (double)convertDateIntoOffset:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSpanView:(id)a0;
- (void)startLoadForDate:(id)a0;

@end
