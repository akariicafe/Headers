@class NSString, WDAddDataManualEntryItem;

@interface WDElectrocardiogramAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_dateEntryItem;
    WDAddDataManualEntryItem *_electrocardiogramClassificationEntryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)builderFromDataFile:(id)a0 startDate:(id)a1;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)saveHKObjectWithCompletion:(id /* block */)a0;
- (id)symptomSamplesForElectrocardiogram:(id)a0;

@end
