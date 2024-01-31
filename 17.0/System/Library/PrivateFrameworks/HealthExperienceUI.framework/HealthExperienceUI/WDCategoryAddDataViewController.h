@class NSString, WDAddDataManualEntryItem, HKValueRange;

@interface WDCategoryAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>

@property (readonly, nonatomic) WDAddDataManualEntryItem *categoryValueEntryItem;
@property (readonly, nonatomic) WDAddDataManualEntryItem *dateEntryItem;
@property (readonly, nonatomic) HKValueRange *selectedDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (BOOL)_hasCategoryValueEntryItem;
- (id)_categoryCells;
- (long long)_defaultSelectedIndex;
- (id)_orderedTitlesForCategoryValuePicker;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)updateSavingEnabled;
- (BOOL)useDuration;
- (BOOL)useSingleStartAndEndDate;
- (void)validateDataWithCompletion:(id /* block */)a0;

@end
