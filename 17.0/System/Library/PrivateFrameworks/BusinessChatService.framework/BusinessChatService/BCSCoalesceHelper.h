@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BCSCoalesceHelper : NSObject <BCSCoalesceHelperProtocol> {
    NSMutableDictionary *_coalesceObjectPool;
    NSObject<OS_dispatch_queue> *_coalesceHelperDispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
