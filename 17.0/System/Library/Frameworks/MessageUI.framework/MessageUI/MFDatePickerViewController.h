@class EMMessage, NSString, UICollectionView, UICollectionViewDiffableDataSource, NSDate, NSObject, EFLocked;
@protocol OS_dispatch_queue, MFDatePickerViewControllerDelegate;

@interface MFDatePickerViewController : UIViewController <MFSendLaterHeaderCollectionViewCellDelegate, MFCalendarCollectionViewCellDelegate, MFTimeWheelCollectionViewCellDelegate, MFTimeHeaderCollectionViewCellDelegate, UICollectionViewDelegate, MFTimeZonePickerViewControllerDelegate>

@property (retain, nonatomic) EMMessage *message;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain, nonatomic) EFLocked *items;
@property (retain, nonatomic) EFLocked *allItems;
@property (retain, nonatomic) NSDate *initialDate;
@property (nonatomic) BOOL timeSwitchEnabled;
@property (nonatomic) BOOL shouldInvokeDelegate;
@property (weak, nonatomic) id<MFDatePickerViewControllerDelegate> delegate;
@property (nonatomic) long long type;
@property (nonatomic) BOOL shouldShowDeleteButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)datePickerViewControllerWithType:(long long)a0 message:(id)a1;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_itemWithIdentifier:(id)a0;
- (void)setUpNavigationBar;
- (void)_cancel:(id)a0;
- (void)_datePicked:(id)a0;
- (id)_itemOfType:(unsigned long long)a0;
- (id)_selectedDateForTimeWheelFromDate:(id)a0;
- (id)_selectedTimeForTimeWheelFromDate:(id)a0;
- (void)calendarCollectionViewCell:(id)a0 didChangeDate:(id)a1;
- (id)createCollectionViewLayout;
- (void)datePickerTimeHeaderCollectionViewCell:(id)a0 showTime:(BOOL)a1;
- (id)initWithType:(long long)a0 shouldShowDeleteButton:(BOOL)a1 initialDate:(id)a2;
- (id)initWithType:(long long)a0 shouldShowDeleteButton:(BOOL)a1 initialDate:(id)a2 shouldDismissCommit:(BOOL)a3;
- (void)sendLaterHeaderCollectionViewCellDateTapped:(id)a0;
- (void)sendLaterHeaderCollectionViewCellTimeTapped:(id)a0;
- (void)setUpDataSourceForCollectionView:(id)a0;
- (void)setUpItemsProvider;
- (void)timeCollectionViewCell:(id)a0 didChangeDate:(id)a1;
- (void)timeZonePickerViewController:(id)a0 chooseTimeZone:(id)a1 cityName:(id)a2;

@end
