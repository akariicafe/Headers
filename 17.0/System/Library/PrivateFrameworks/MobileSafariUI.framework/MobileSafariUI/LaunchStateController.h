@class NSMutableArray;

@interface LaunchStateController : NSObject {
    NSMutableArray *_actionBlocks;
}

@property (readonly, nonatomic) BOOL hasCompletedLaunch;

+ (id)sharedController;

- (id)init;
- (void)applicationUIDidBecomeActive;
- (void)doAfterUIBecomesActive:(id /* block */)a0;
- (void).cxx_destruct;
- (void)forceMarkUIBecomeActiveForTesting;

@end
