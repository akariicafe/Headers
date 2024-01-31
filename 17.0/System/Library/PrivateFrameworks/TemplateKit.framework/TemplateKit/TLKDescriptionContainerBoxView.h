@class TLKTextView;

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView

@property (retain, nonatomic) TLKTextView *viewForFirstAndLastBaseline;

- (void).cxx_destruct;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;

@end
