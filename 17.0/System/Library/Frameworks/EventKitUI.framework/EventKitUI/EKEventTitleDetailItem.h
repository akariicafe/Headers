@class EKEventDetailTitleCell, UIView, NSObject, NSDate;
@protocol EKEventTitleDetailItemDelegate;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    EKEventDetailTitleCell *_cell;
    BOOL _cellNeedsUpdate;
}

@property (nonatomic) BOOL hidesTopSeparator;
@property (nonatomic) BOOL hidesBottomSeparator;
@property (retain, nonatomic) NSDate *proposedTime;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (weak, nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) unsigned long long numberOfTitleLines;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)predictionWasActedOn;
- (void)reset;
- (void)titleCell:(id)a0 requestPresentShareSheetWithActivityItems:(id)a1 withPopoverSourceView:(id)a2;
- (void)_updateCellIfNeededForWidth:(double)a0;
- (BOOL)titleCellShouldPresentShareSheet:(id)a0;
- (BOOL)showsDetectedConferenceItem;
- (double)titleHeight;
- (void)refreshForHeightChange;
- (void)editButtonPressed;
- (void).cxx_destruct;
- (void)setCellPosition:(int)a0;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)refreshCopiedEvents;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)minimalMode;
- (id)owningViewController;
- (BOOL)shouldShowEditButtonInline;

@end
