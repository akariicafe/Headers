@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)truthDatabase;
- (id)init;
- (id)_nickNameContainerIdentifier;
- (id)manateeDataBase;
- (id)_nickNameContainer;
- (id)truthPublicDatabase;
- (id)nickNamePublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_serverSaysToUseOldContainer;

@end
