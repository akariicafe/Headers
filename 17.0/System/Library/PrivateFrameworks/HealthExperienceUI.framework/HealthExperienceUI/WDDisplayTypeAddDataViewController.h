@class NSString, WDAddDataManualEntryItem;

@interface WDDisplayTypeAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_dateTimeEntryItem;
}

@property (retain, nonatomic) WDAddDataManualEntryItem *valueFieldManualEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)createValueFieldManualEntryItem;
- (void)_setDefaultValuesIfNecessary;
- (void)_updateManualEntryItemWithCurrentBMI:(id)a0;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;

@end
