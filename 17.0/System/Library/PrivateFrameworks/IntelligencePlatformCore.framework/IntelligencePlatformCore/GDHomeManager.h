@class NSArray, NSString, HMHomeManager, NSObject, _PASLock;
@protocol OS_dispatch_semaphore;

@interface GDHomeManager : NSObject <HMHomeManagerDelegate> {
    NSObject<OS_dispatch_semaphore> *_homeUpdateSem;
    HMHomeManager *_manager;
    _PASLock *_guardedData;
}

@property (readonly, copy, nonatomic) NSArray *homes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;

@end
