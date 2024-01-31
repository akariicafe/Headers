@interface MedicationsHealthAppPlugin.MedicationsListEditViewController : UITableViewController {
    void /* unknown type, empty encoding */ listManager;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ listRefreshSubscription;
    void /* unknown type, empty encoding */ medmojiCache;
    void /* unknown type, empty encoding */ currentIdentifiers;
    void /* unknown type, empty encoding */ listManagerState;
}

- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)didTapDone;

@end
