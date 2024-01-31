@class NSString, NSSet, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol BLTPingSubscribing, BLTBulletinDistributorSubscriberDelegate, BLTBulletinDistributorSubscriberDeviceDelegate, OS_dispatch_queue;

@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService> {
    NSMutableDictionary *_subscriptions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id<BLTPingSubscribing> client;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSString *machServiceName;
@property (weak) id<BLTBulletinDistributorSubscriberDelegate> delegate;
@property (weak) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;
@property (readonly, nonatomic) NSSet *sectionIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (id)init;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 completion:(id /* block */)a1;
- (void)subscribeWithMachServiceName:(id)a0;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1;
- (void).cxx_destruct;
- (void)subscribeToSectionID:(id)a0 forFullBulletins:(BOOL)a1 withAck:(BOOL)a2 ackAllowedOnLocalConnection:(BOOL)a3;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 subsectionIDs:(id)a1 completion:(id /* block */)a2;
- (void)_connectIfNecessary;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (void)sendBulletinSummary:(id)a0;
- (void)unsubscribeFromSectionID:(id)a0;

@end
