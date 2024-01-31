@class NSURL;

@interface DCCachesDirectory : NSObject

@property (readonly, nonatomic) NSURL *cachesDirectoryURL;

+ (id)sharedCachesDirectory;

- (id)init;
- (void).cxx_destruct;

@end
