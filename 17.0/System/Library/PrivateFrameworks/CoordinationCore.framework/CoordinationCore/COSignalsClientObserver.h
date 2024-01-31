@class NSSet, NSObject, COHomeKitAccessoryMemento;
@protocol OS_nw_activity;

@interface COSignalsClientObserver : COClientObserver

@property (readonly, copy, nonatomic) COHomeKitAccessoryMemento *accessory;
@property (readonly, copy, nonatomic) NSSet *constraints;
@property (nonatomic) BOOL canDispatch;
@property (retain, nonatomic) NSObject<OS_nw_activity> *dispatchabilityStallActivity;
@property (nonatomic) unsigned long long dispatchabilityStallCount;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithConnection:(id)a0 asAccessory:(id)a1 constraints:(id)a2 cluster:(id)a3;
- (id)initWithConnection:(id)a0 cluster:(id)a1;

@end
