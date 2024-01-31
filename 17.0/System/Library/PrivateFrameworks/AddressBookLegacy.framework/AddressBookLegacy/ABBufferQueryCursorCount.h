@class ABBufferQueryCount;

@interface ABBufferQueryCursorCount : NSObject

@property (readonly, nonatomic) ABBufferQueryCount *query;

- (id)initWithQuery:(id)a0;
- (void)dealloc;
- (long long)fetchContactCount;
- (id)initWithAddressBook:(void *)a0 predicate:(id)a1 includeLinkedContacts:(BOOL)a2 managedConfiguration:(id)a3;

@end
