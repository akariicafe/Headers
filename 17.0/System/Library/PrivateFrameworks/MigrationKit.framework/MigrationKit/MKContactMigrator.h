@class CNContactStore;

@interface MKContactMigrator : MKMigrator {
    CNContactStore *_contactStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0;
- (void)importVCard:(id)a0;

@end
