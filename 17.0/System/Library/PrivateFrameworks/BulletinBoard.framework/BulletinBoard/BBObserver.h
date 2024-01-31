@class NSString, NSMutableDictionary, NSMapTable, NSObject, BBObserverServerProxy;
@protocol BBObserverDelegate, OS_dispatch_queue;

@interface BBObserver : NSObject <BBAssertionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_sectionParametersBySectionID;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    BBObserverServerProxy *_serverProxy;
    BOOL _isGateway;
}

@property (weak, nonatomic) id<BBObserverDelegate> delegate;
@property (nonatomic) unsigned long long observerFeed;
@property (readonly, copy, nonatomic) NSString *gatewayName;
@property (readonly, nonatomic) unsigned long long gatewayPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)observerWithQueue:(id)a0 calloutQueue:(id)a1 forGatewayName:(id)a2;
+ (id)gatewayWithQueue:(id)a0 calloutQueue:(id)a1 name:(id)a2 priority:(unsigned long long)a3;

- (void)sendResponse:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)sendResponse:(id)a0 withCompletionIncludingModifiedResponse:(id /* block */)a1;
- (id)parametersForSectionID:(id)a0;
- (void)removeSection:(id)a0;
- (void)dealloc;
- (void)requestNoticesBulletinsForSectionID:(id)a0;
- (void)removeBulletins:(id)a0 inSection:(id)a1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearSection:(id)a0;
- (void)getParametersForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (void)_queue_serverProxy:(id)a0 connectionStateDidChange:(BOOL)a1;
- (void)getComposedImageSizeForAttachment:(id)a0 bulletin:(id)a1 withCompletion:(id /* block */)a2;
- (id)_initWithQueue:(id)a0 calloutQueue:(id)a1 gatewayName:(id)a2 gatewayPriority:(unsigned long long)a3 isGateway:(BOOL)a4;
- (void)_queue_updateBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)invalidate;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestNoticesBulletinsForAllSections;
- (void)updateGlobalSettings:(id)a0;
- (void)removeBulletins:(id)a0 inSection:(id)a1 fromFeed:(unsigned long long)a2;
- (void)serverProxy:(id)a0 connectionStateDidChange:(BOOL)a1;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (void)updateSectionParameters:(id)a0 forSectionID:(id)a1;
- (void)clearBulletinsFromDate:(id)a0 toDate:(id)a1 inSections:(id)a2;
- (void)_queue_registerBulletin:(id)a0 withTransactionID:(unsigned long long)a1;
- (void)requestListBulletinsForSectionID:(id)a0;
- (void)_queue_updateAddBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)noteBulletinsLoadedForSectionID:(id)a0;
- (void)updateBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)updateSectionInfo:(id)a0;
- (void)getBulletinsWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 asGateway:(id)a1 priority:(unsigned long long)a2;
- (BOOL)isValid;
- (void)_queue_noteBulletinsLoadedForSectionID:(id)a0;
- (void)noteServerReceivedResponseForBulletin:(id)a0;
- (id)initWithQueue:(id)a0 forGateway:(id)a1;
- (void)clearBulletins:(id)a0 inSection:(id)a1;
- (void)getBulletinsForPublisherMatchIDs:(id)a0 sectionID:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_queue_updateRemoveBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)getUniversalSectionIDForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_queue_invalidate;
- (void)assertionExpired:(id)a0 transactionID:(unsigned long long)a1;
- (void)_queue_updateModifyBulletin:(id)a0 withReply:(id /* block */)a1;
- (id)initWithQueue:(id)a0 calloutQueue:(id)a1;
- (id)initWithQueue:(id)a0 calloutQueue:(id)a1 gatewayName:(id)a2 gatewayPriority:(unsigned long long)a3 isGateway:(BOOL)a4 connection:(id)a5;

@end
