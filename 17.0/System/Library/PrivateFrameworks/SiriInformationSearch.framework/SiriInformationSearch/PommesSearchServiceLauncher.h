@class PommesSearchXPCServer;

@interface PommesSearchServiceLauncher : NSObject

@property (readonly, nonatomic) PommesSearchXPCServer *pommesSearchService;

- (id)init;
- (void).cxx_destruct;

@end
