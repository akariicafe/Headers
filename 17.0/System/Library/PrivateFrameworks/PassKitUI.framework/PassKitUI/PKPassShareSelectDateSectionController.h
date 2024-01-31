@class NSDate;
@protocol PKPassShareSelectDateSectionControllerDelegate;

@interface PKPassShareSelectDateSectionController : PKPassShareSectionController <PKDateSelectorCollectionViewCellDelegate> {
    BOOL _selected;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
}

@property (weak, nonatomic) id<PKPassShareSelectDateSectionControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)_setSelected:(id)a0;
- (void)didSelectItem:(id)a0;
- (void)_setDate:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)dateSelectorCollectionViewCell:(id)a0 didUpdateDate:(id)a1;
- (void)decorateCalendarCell:(id)a0;
- (id)decorateListCell:(id)a0 forScheduleRowItem:(id)a1;
- (id)initWithDate:(id)a0 minimumDate:(id)a1 maximumDate:(id)a2 delegate:(id)a3;
- (void)reloadItemsAnimated:(BOOL)a0;
- (BOOL)shouldHighlightItem:(id)a0;

@end
