@class CNContactStore;

@interface CRKConcreteContactsPrimitives : NSObject <CRKContactsPrimitives>

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchMeCardContactWithError:(id *)a0;
- (id)subscribeToContactsChanges:(id /* block */)a0;

@end
