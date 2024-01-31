@class NSXPCConnection, NSObject, BBObserver;
@protocol OS_dispatch_queue;

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {
    BOOL _isValid;
    BOOL _isEstablished;
}

@property (weak, nonatomic) BBObserver *observer;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;

+ (id)xpcInterface;

- (void)getUniversalSectionIDForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)removeSection:(id)a0;
- (void)dealloc;
- (void)getBulletinsForPublisherMatchIDs:(id)a0 sectionID:(id)a1 withHandler:(id /* block */)a2;
- (void)requestNoticesBulletinsForSectionID:(id)a0;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)a0 withHandler:(id /* block */)a1;
- (void)getSectionInfoWithHandler:(id /* block */)a0;
- (void)clearSection:(id)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withHandler:(id /* block */)a1;
- (void)updateBulletin:(id)a0 withHandler:(id /* block */)a1;
- (void)setObserverFeed:(unsigned long long)a0 attachToLightsAndSirensGateway:(id)a1;
- (void)invalidate;
- (void)requestNoticesBulletinsForAllSections;
- (void)getBulletinsWithHandler:(id /* block */)a0;
- (void)updateGlobalSettings:(id)a0;
- (void)handleResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)getSectionParametersForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)finishedWithBulletinID:(id)a0 transactionID:(unsigned long long)a1;
- (void)updateSectionParameters:(id)a0 forSectionID:(id)a1;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)a0;
- (void)clearBulletinsFromDate:(id)a0 toDate:(id)a1 inSections:(id)a2;
- (void)noteBulletinsLoadedForSectionID:(id)a0;
- (void)updateSectionInfo:(id)a0;
- (id)initWithObserver:(id)a0 connection:(id)a1 queue:(id)a2 calloutQueue:(id)a3;
- (void)removeBulletins:(id)a0 inSection:(id)a1 fromFeeds:(unsigned long long)a2;
- (BOOL)isValid;
- (void)noteServerReceivedResponseForBulletin:(id)a0;
- (void)getObserverDebugInfo:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setObserverFeed:(unsigned long long)a0 asLightsAndSirensGateway:(id)a1 priority:(unsigned long long)a2;
- (void)clearBulletinIDs:(id)a0 inSection:(id)a1;
- (BOOL)established;

@end
