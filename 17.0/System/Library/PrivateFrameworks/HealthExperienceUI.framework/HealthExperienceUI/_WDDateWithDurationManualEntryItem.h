@class NSString, WDAddDataManualEntryItem, NSDate;

@interface _WDDateWithDurationManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_durationItem;
    NSDate *_maximumStartDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)_setupEntryItems;
- (id)generateValue;
- (id)initWithMaximumDate:(id)a0;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)tableViewCells;

@end
