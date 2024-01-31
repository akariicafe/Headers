@class NSString, NSMutableArray, NSData;

@interface UMLUserManifest : NSObject

@property (nonatomic) int version;
@property (nonatomic) unsigned long long generation;
@property (nonatomic) int lastBootedUser;
@property (nonatomic) int deviceConfig;
@property (nonatomic) long long apnsIDStart;
@property (copy, nonatomic) NSString *fsVolumeType;
@property (nonatomic) int maxUsers;
@property (nonatomic) long long maxUserSize;
@property (nonatomic) int userSessionType;
@property (nonatomic) int loginuiCheck;
@property (nonatomic) int networkBG;
@property (copy, nonatomic) NSMutableArray *users;
@property (copy, nonatomic) NSMutableArray *syncUserList;
@property (copy, nonatomic) NSMutableArray *lruList;
@property (readonly, nonatomic) NSData *dataValue;

+ (id)manifestFromData:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
