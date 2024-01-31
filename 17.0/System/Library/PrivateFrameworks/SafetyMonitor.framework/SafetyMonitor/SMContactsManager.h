@interface SMContactsManager : NSObject

+ (id)shared;

- (id)activeSessionRecipientContactFor:(id)a0;
- (id)contactWith:(id)a0;
- (id)fetchAdditionalInfoFor:(id)a0 keysToFetch:(id)a1;
- (id)fetchSelfContact;

@end
