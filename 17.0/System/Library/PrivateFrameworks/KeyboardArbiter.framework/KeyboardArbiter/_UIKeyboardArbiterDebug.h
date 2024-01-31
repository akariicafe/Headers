@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _UIKeyboardArbiterDebug : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _importantCount;
    NSMutableArray *_entries;
    BOOL _disable;
}

@property (nonatomic) BOOL pause;

+ (id)sharedInstance;

- (id)init;
- (void)addEntry:(id)a0;
- (void)debugWithMessage:(id)a0;
- (void)errorWithMessage:(id)a0;
- (void)infoWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)addAsynchronousData:(id /* block */)a0;

@end
