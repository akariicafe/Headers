@class NSString, NSXPCConnection;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pingSubscriberDidLoad;
- (id)initWithConnection:(id)a0;
- (id)sectionIDsForBulletins;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1 ack:(id /* block */)a2;
- (void)pingWithBulletin:(id)a0;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1;
- (void).cxx_destruct;
- (id)sectionIDs;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (id)subscriptionInfos;

@end
