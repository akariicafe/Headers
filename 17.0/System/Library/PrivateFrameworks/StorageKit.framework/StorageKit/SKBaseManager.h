@interface SKBaseManager : NSObject

@property (readonly, nonatomic) BOOL supportsCocoa;

+ (id)sharedManager;
+ (id)defaultVisibleRoles;

- (id)init;
- (id)allDisks;
- (id)formatableFileSystems;
- (id)knownDiskForDictionary:(id)a0;

@end
