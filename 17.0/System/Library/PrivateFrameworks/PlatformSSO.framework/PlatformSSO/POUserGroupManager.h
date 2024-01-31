@class NSURL;

@interface POUserGroupManager : NSObject

@property (retain, nonatomic) NSURL *filePath;

- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id)_nextAvailableUserId:(id)a0;
- (id)createOrUpdateUser:(id)a0 withError:(id *)a1;
- (id)findUser:(id)a0 withError:(id *)a1;
- (id)getAllUsersWithError:(id *)a0;
- (id)loadUsers_lockedWithError:(id *)a0;
- (BOOL)removeUserWithName:(id)a0 withError:(id *)a1;
- (BOOL)saveUsers_locked:(id)a0 withError:(id *)a1;

@end
