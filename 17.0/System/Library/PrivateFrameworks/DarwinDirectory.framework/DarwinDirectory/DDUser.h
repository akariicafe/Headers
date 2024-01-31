@class NSUUID, NSString, NSMutableArray;

@interface DDUser : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int uid;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int primaryGroupID;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *homeDirectory;
@property (copy, nonatomic) NSString *shell;
@property (copy, nonatomic) NSMutableArray *memberships;

+ (id)userWithUUID:(id)a0 uid:(unsigned int)a1 name:(id)a2 primaryGroupID:(unsigned int)a3 fullName:(id)a4 homeDirectory:(id)a5 shell:(id)a6 memberships:(id)a7;

- (void).cxx_destruct;

@end
