@class NSString, NSMutableSet, IRServiceStore;

@interface IRReplayWriter : NSObject <IRDeallocSync> {
    NSMutableSet *_bufferedReplayEvents;
}

@property (readonly, nonatomic) IRServiceStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deallocSync;
- (id)initWithServiceStore:(id)a0;
- (void)writeReplayEventWithReason:(id)a0 SystemState:(id)a1 miloLslPrediction:(id)a2 candidatesContainerDO:(id)a3 nearbyDeviceContainerDO:(id)a4 date:(id)a5;

@end
