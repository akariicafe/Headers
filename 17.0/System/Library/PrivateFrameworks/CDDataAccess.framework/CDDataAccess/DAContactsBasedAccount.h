@class NSString, CNAccount;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) CNAccount *account;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (id)initWithAccount:(id)a0;
- (id)externalIdentifier;
- (int)legacyIdentifier;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isContact;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;

@end
