@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FCCacheCoordinatorGCDSerialLock : NSObject <FCCacheCoordinatorLocking> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
