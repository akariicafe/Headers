@class NSArray, NSString, NSObject;
@protocol OS_os_activity, CKDZoneGatekeeperWaiter;

@interface CKWaiterWrapper : NSObject

@property (readonly, nonatomic) id<CKDZoneGatekeeperWaiter> waiter;
@property (readonly, nonatomic) NSArray *zoneIDs;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) id /* block */ waitCompletedHandler;
@property (readonly, nonatomic) NSString *personaID;

- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWaiter:(id)a0 zoneIDs:(id)a1 waitCompletedHandler:(id /* block */)a2 activity:(id)a3;
- (void)invokeWaitCompletedHandler:(BOOL)a0;

@end
