@class NSUUID, NSString;

@interface DDGroup : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int gid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fullName;

+ (id)groupWithUUID:(id)a0 gid:(unsigned int)a1 name:(id)a2 fullName:(id)a3;

- (void).cxx_destruct;

@end
