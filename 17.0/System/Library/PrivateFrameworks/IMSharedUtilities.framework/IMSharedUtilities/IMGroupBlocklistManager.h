@class NSDate;

@interface IMGroupBlocklistManager : NSObject

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlocklistFilename;

- (id)init;
- (void)loadFromFile:(id)a0;
- (void)save;
- (void).cxx_destruct;
- (void)reloadIfNeeded;
- (void)loadData;
- (void)_updateLastModifiedDate:(id)a0;
- (void)blocklistGroupId:(id)a0;
- (BOOL)hasFileChanged;
- (id)initFromFile:(id)a0;
- (BOOL)isFeatureDisabled;
- (BOOL)isGroupInBlocklist:(id)a0;

@end
