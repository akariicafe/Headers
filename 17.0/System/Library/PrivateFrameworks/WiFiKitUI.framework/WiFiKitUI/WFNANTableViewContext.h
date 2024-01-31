@class NSString, NSMutableArray, NSMutableDictionary;

@interface WFNANTableViewContext : NSObject <WiFiAwarePublisherDelegate, WiFiAwareSubscriberDelegate>

@property (retain, nonatomic) NSMutableArray *publishers;
@property (retain, nonatomic) NSMutableDictionary *dataSessionsForPublish;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) NSMutableDictionary *discoveryResults;
@property (retain, nonatomic) NSMutableDictionary *dataSessionsForSubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)publisher:(id)a0 terminatedWithReason:(long long)a1;
- (void)publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)publisher:(id)a0 dataTerminatedForHandle:(id)a1 reason:(long long)a2;
- (void)publisher:(id)a0 failedToStartWithError:(long long)a1;
- (void)publisherStarted:(id)a0;
- (void)subscriber:(id)a0 failedToStartWithError:(long long)a1;
- (void)subscriber:(id)a0 lostDiscoveryResultForPublishID:(unsigned char)a1 address:(id)a2;
- (void)subscriber:(id)a0 receivedDiscoveyResult:(id)a1;
- (void)subscriber:(id)a0 terminatedWithReason:(long long)a1;
- (void)subscriberStarted:(id)a0;
- (void)removeDataSession:(id)a0 forPublisher:(id)a1;
- (void)addDataSession:(id)a0 forPublisher:(id)a1;
- (void)addDataSession:(id)a0 forSubscriber:(id)a1;
- (void)addDiscoveryResult:(id)a0 forSubscriber:(id)a1;
- (void)addPublisher:(id)a0;
- (id)getDataSessionAtIndex:(long long)a0 forPublisher:(id)a1;
- (id)getDataSessionAtIndex:(long long)a0 forSubscriber:(id)a1;
- (long long)getDataSessionsCountForPublisher:(id)a0;
- (long long)getDataSessionsCountForSubscriber:(id)a0;
- (id)getDataSessionsForPublisher:(id)a0;
- (id)getDataSessionsForSubscriber:(id)a0;
- (id)getDiscoveryResultAtIndex:(long long)a0 forSubscriber:(id)a1;
- (long long)getDiscoveryResultsCountForSubscriber:(id)a0;
- (id)getDiscoveryResultsForSubscriber:(id)a0;
- (id)getPublisherAtIndex:(long long)a0;
- (id)getPublishers;
- (long long)getPublishersCount;
- (id)getSubscriberAtIndex:(long long)a0;
- (id)getSubscribers;
- (long long)getSubscribersCount;
- (void)removeDataSession:(id)a0 forSubscriber:(id)a1;
- (void)removeDiscoveryResultWithPublishID:(unsigned char)a0 andPublisherAddress:(id)a1 forSubscriber:(id)a2;
- (void)removePublisher:(id)a0;
- (void)removePublisherAtIndex:(long long)a0;
- (void)removeSubscriberAtIndex:(long long)a0;

@end
