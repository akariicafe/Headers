@class NSMutableArray;

@interface HUApplier : NSObject {
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
}

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;

+ (void)registerStandaloneApplier:(id)a0;
+ (void)unregisterStandaloneApplier:(id)a0;

- (id)init;
- (BOOL)start;
- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)cancel;
- (void)updateProgress:(double)a0;
- (BOOL)complete:(BOOL)a0;
- (BOOL)_hasCompleted;
- (void)addApplierBlock:(id /* block */)a0;

@end
