@class CNContactStore;

@interface WFCNContactStore : WFContactStore

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)contactWithIdentifier:(id)a0;
- (id)firstContactWithEmailAddress:(id)a0;
- (id)firstContactWithPhoneNumber:(id)a0;
- (BOOL)addContact:(id)a0 error:(id *)a1;
- (id)allContactsWithSortOrder:(long long)a0;
- (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
- (id)contactsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)contactsWithName:(id)a0;
- (id)contactsWithName:(id)a0 keysToFetch:(id)a1;
- (id)firstContactWithPredicate:(id)a0 propertyID:(int)a1 valueEqualityBlock:(id /* block */)a2;

@end
