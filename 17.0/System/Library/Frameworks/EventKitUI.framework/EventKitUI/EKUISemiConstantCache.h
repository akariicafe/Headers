@class UIImage, UIFont;

@interface EKUISemiConstantCache : NSObject {
    UIFont *_weekAllDayLabelFontCompact;
    UIFont *_weekAllDayLabelFontRegular;
    UIFont *_weekAllDayTodayLabelFontCompact;
    UIImage *_inboxDisclosureImage;
}

@property double weekAllDayBaselineForLargeFormatWeekView;
@property double weekAllDayBaselineForSmallFormatWeekView;
@property double weekAllDayOccurrenceHeight;
@property (readonly) UIFont *weekAllDayLabelFontCompact;
@property (readonly) UIFont *weekAllDayLabelFontRegular;
@property (readonly) UIFont *weekAllDayTodayLabelFontCompact;
@property (readonly) UIFont *weekAllDayTodayLabelFontRegular;
@property double minYearMonthHeaderFontSizeUsed;

+ (id)sharedInstance;

- (long long)_participantStatusFromDetailAttendeesStatus:(long long)a0;
- (id)init;
- (void)_localeChanged:(id)a0;
- (id)inboxDisclosureImage;
- (id)statusGlyphForStatusType:(long long)a0;
- (void)_orientationChanged:(id)a0;
- (void)_contentCategorySizeChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateMetrics;

@end
