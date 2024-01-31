@class NSUserDefaults;

@interface BCSHousekeeper : NSObject <BCSHousekeeping>

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) long long currentVersion;

- (id)initWithUserDefaults:(id)a0;
- (void).cxx_destruct;
- (void)cleanupDataAtOldPathsIfNeeded;
- (id)initWithUserDefaults:(id)a0 currentVersion:(long long)a1;

@end
