@class _UIDatePickerCalendarTime, NSCalendar, NSString, NSArray, NSLocale, _UIDatePickerCompactTimeLabel, _UIDatePickerOverlayPresentation, UILabel;
@protocol _UIDatePickerCalendarTimeViewDelegate;

@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCompactTimeLabelDelegate, UIPopoverPresentationControllerDelegate> {
    BOOL _showsTimeLabel;
    BOOL _followsSystemHourCycle;
    NSString *_timeLocaleIdentifier;
    NSArray *_clockLayoutConstraints;
    _UIDatePickerOverlayPresentation *_presentation;
}

@property (readonly, nonatomic) UILabel *timeLabel;
@property (readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeTextField;
@property (weak, nonatomic) id<_UIDatePickerCalendarTimeViewDelegate> delegate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *customFontDesign;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) BOOL roundsToMinuteInterval;
@property (readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime;
@property (nonatomic) BOOL shouldShowTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToSuperview:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateFonts;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reload;
- (void).cxx_destruct;
- (void)compactTimeLabel:(id)a0 didSelectTime:(id)a1;
- (void)_reloadDateFormatters;
- (void)_setupViewHierarchy;
- (void)_updateClockLayout;
- (void)_updateTextFieldsFromSelectedDateComponents;
- (void)_updateTimeLabelTitleIfNeeded;
- (BOOL)compactTimeLabel:(id)a0 shouldDismissForInteractionAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)compactTimeLabelDidBeginEditing:(id)a0;
- (void)compactTimeLabelDidEndEditing:(id)a0;
- (void)compactTimeLabelWillBecomeFirstResponder:(id)a0;
- (id)createDatePickerForCompactTimeLabel:(id)a0;
- (id)primaryFirstResponder;
- (void)reloadWithCalendar:(id)a0 locale:(id)a1 selectedDate:(id)a2;
- (void)reloadWithCalendar:(id)a0 locale:(id)a1 selectedDate:(id)a2 followsSystemHourCycle:(BOOL)a3;
- (void)setSelectedDate:(id)a0;

@end
