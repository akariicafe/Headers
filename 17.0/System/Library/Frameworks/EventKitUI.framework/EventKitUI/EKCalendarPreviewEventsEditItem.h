@class NSArray, DAESubscribedCalendarSummary, EKICSPreviewController;

@interface EKCalendarPreviewEventsEditItem : EKCalendarEditItem {
    DAESubscribedCalendarSummary *_previewSummary;
    NSArray *_previewEventViews;
    EKICSPreviewController *_previewController;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)headerTitle;
- (void).cxx_destruct;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (id)chooseEventsForPreview:(id)a0 count:(unsigned long long)a1;
- (id)initWithPreviewSummary:(id)a0;

@end
