@class NSString, LSApplicationProxy, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FCNewsAvailabilityMonitor : NSObject <FCNewsAvailabilityMonitor>

@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isNewsAvailable) BOOL NewsIsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addNotificationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithProcessVariant:(unsigned long long)a0;
- (id)initWithApplicationProxy:(id)a0 queue:(id)a1;
- (void)_updateAvailability;
- (void)setNewsIsAvailable:(BOOL)a0;
- (BOOL)_isNewsAvailable;
- (id)initWithProcessVariant:(unsigned long long)a0 queue:(id)a1;

@end
