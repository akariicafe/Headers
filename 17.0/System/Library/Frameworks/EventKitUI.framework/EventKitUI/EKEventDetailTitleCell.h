@class UIView, NSString, UILabel, UIButton, NSMutableArray, NSObject, EKEventDetailSuggestedLocationCell, EKEventDetailConferenceCell;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailSuggestedLocationCellDelegate, ConferenceCellDelegate> {
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    BOOL _showAllLocation;
    struct _NSRange { unsigned long long location; unsigned long long length; } _showLocationRange;
    EKEventDetailSuggestedLocationCell *_suggestedLocationCell;
    EKEventDetailConferenceCell *_conferenceDetailView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
    BOOL _hideTopCellSeparator;
    BOOL _hideBottomCellSeparator;
    int _lastPosition;
}

@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) BOOL showingInlineDayView;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFont;
+ (void)_registerForInvalidation;
+ (id)_locationFont;
+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;

- (void)_setDateTimeString:(id)a0 line:(unsigned long long)a1;
- (void)layoutMarginsDidChange;
- (void)conferenceCellUpdated:(id)a0;
- (void)setHideBottomCellSeparator:(BOOL)a0;
- (void)dealloc;
- (void)setPrimaryTextColor:(id)a0;
- (id)_conferenceDetailView;
- (void)_promptForSpanWithSourceView:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)update;
- (void)setStatusString:(id)a0;
- (id)_statusView;
- (id)_recurrenceView;
- (double)titleHeight;
- (void)handleTapOnLabel:(id)a0;
- (BOOL)_shouldShowConferenceCell;
- (void)_saveEventWithSpan:(long long)a0;
- (double)_layoutForWidth:(double)a0;
- (void)_updateSeparatorStyle;
- (void)contentSizeCategoryChanged:(id)a0;
- (BOOL)_useLargeFonts;
- (id)_editButton;
- (void)conferenceCell:(id)a0 requestPresentShareSheetWithActivityItems:(id)a1 withPopoverSourceView:(id)a2;
- (void)didTapAddSuggestedLocationCell:(id)a0 disambiguatedLocation:(id)a1;
- (void)setColor:(id)a0;
- (void)setTravelTimeString:(id)a0;
- (void)didTapDismissSuggestedLocationCell:(id)a0;
- (void)editButtonTapped;
- (BOOL)conferenceCellShouldPresentShareSheet:(id)a0;
- (void).cxx_destruct;
- (id)_dateTimeViewForLine:(unsigned long long)a0;
- (void)addLocation:(id)a0;
- (void)setLocation:(id)a0;
- (id)_suggestedLocationCell;
- (id)owningViewController;
- (id)_titleView;
- (void)layoutSubviews;
- (void)setHideTopCellSeparator:(BOOL)a0;
- (id)_travelTimeView;
- (void)setTitle:(id)a0;
- (void)setRecurrenceString:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;

@end
