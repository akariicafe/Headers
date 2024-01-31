@interface SearchUIContactButtonItemGenerator : SearchUIButtonItemGenerator

- (BOOL)facetimeAvailable;
- (id)audioCallButtonItemsForString:(id)a0 isPhoneNumber:(BOOL)a1;
- (id)buttonItemWithSymbol:(id)a0 title:(id)a1 command:(id)a2;
- (id)dialRequestWithProvider:(id)a0 destination:(id)a1 isPhoneNumber:(BOOL)a2;
- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)a0 completion:(id /* block */)a1;
- (id)videoCallButtonItemForString:(id)a0 isPhoneNumber:(BOOL)a1;

@end
