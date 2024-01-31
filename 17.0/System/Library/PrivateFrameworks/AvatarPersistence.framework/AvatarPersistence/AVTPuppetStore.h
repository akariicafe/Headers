@class NSArray;

@interface AVTPuppetStore : NSObject

@property (copy, nonatomic) NSArray *puppetRecords;

+ (id)createPuppetRecords;

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id)allAvatarPuppetsExcluding:(id)a0 error:(id *)a1;
- (id)allAvatarPuppetsWithError:(id *)a0;
- (id)allPuppetRecords;
- (id)avatarPuppetsForFetchRequest:(id)a0 error:(id *)a1;
- (id)avatarsWithIdentifiers:(id)a0 error:(id *)a1;
- (void)loadPuppetRecordsIfNeeded;

@end
