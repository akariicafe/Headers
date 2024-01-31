@protocol CalendarPublishingActivityDelegate;

@interface CalendarPublishingActivityViewController : UIActivityViewController

@property (weak) id<CalendarPublishingActivityDelegate> activityDelegate;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)a0;
- (BOOL)_shouldShowSystemActivityType:(id)a0;

@end
