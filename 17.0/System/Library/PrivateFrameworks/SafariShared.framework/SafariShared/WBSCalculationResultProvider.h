@class NSString, NSSet, NSArray, NSObject, NSDataDetector;
@protocol OS_dispatch_queue;

@interface WBSCalculationResultProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryLock;
    NSString *_currentQueryString;
    NSSet *_queryStringsToIgnore;
    NSArray *_queryPrefixesToIgnore;
    NSObject<OS_dispatch_queue> *_calculationQueue;
    NSDataDetector *_phoneNumberDetector;
}

- (id)init;
- (void).cxx_destruct;
- (void)evaluateQuery:(id)a0 resultHandler:(id /* block */)a1;

@end
