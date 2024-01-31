@class NSArray, NSObject, SUUIClientContext;
@protocol OS_dispatch_queue;

@interface SUUILoadGratisEligibilityOperation : NSOperation {
    NSArray *_bundleIDs;
    SUUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)_bodyData;
- (id)initWithBundleIdentifiers:(id)a0 clientContext:(id)a1;

@end
