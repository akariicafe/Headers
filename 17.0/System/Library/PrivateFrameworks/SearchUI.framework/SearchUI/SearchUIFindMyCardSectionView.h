@class CNContact, NSString, TLKLabel, FMUILocationDetailViewController;

@interface SearchUIFindMyCardSectionView : SearchUICardSectionView <FMFMapViewControllerDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) FMUILocationDetailViewController *viewController;
@property (retain, nonatomic) TLKLabel *locationLabel;
@property (retain, nonatomic) TLKLabel *timeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fillsBackgroundWithContentForRowModel:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

@end
