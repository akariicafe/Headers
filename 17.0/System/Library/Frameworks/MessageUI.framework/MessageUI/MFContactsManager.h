@class CNContactStore;

@interface MFContactsManager : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;

+ (id)sharedManager;
+ (BOOL)isAuthorizedToUseContacts;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;

@end
