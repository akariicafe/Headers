@interface SMContactsManagerInternal : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ keystoFetch;
}

@property (class, nonatomic, readonly) SMContactsManagerInternal *shared;

- (id)init;
- (void).cxx_destruct;
- (id)activeSessionRecipientContactFor:(id)a0;
- (id)contactWith:(id)a0;
- (id)fetchAdditionalInfoFor:(id)a0 keysToFetch:(id)a1;
- (id)fetchSelfContact;

@end
