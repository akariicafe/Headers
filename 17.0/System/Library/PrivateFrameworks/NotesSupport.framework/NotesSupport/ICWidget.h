@interface ICWidget : NSObject

@property (class, readonly, nonatomic) ICWidget *sharedWidget;

- (void)reloadTimelinesWithReason:(id)a0;
- (void)reloadTimelineForKind:(id)a0 reason:(id)a1;

@end
