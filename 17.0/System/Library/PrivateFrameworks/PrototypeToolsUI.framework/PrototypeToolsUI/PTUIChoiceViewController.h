@class PTChoiceRow, NSString, NSIndexPath;

@interface PTUIChoiceViewController : UITableViewController <PTRowObserver> {
    NSIndexPath *_valueIndexPath;
}

@property (retain, nonatomic) PTChoiceRow *row;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)rowDidChangeValue:(id)a0;
- (void)rowDidReload:(id)a0;
- (void)_checkAppropriateCell;
- (id)initWithPresentingRow:(id)a0;

@end
