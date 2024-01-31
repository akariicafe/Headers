@class BBSettingsGateway, NSString, NSObject, BBObserver;
@protocol BLTSectionInfoObserverDelegate, OS_dispatch_queue;

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate> {
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _reloadSectionInfoCompletion;
    BBSettingsGateway *_settingsGateway;
}

@property (weak, nonatomic) id<BLTSectionInfoObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)sectionInfoForSectionID:(id)a0;
- (id)initWithSettingsGateway:(id)a0;
- (void)observer:(id)a0 removeSection:(id)a1;
- (void).cxx_destruct;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (void)observer:(id)a0 noteServerConnectionStateChanged:(BOOL)a1;
- (void)reloadWithCompletion:(id /* block */)a0;
- (void)_getUniversalSectionIDs:(id)a0 sectionIDEnumerator:(id)a1 completion:(id /* block */)a2;
- (void)_reloadSectionInfosWithCompletion:(id /* block */)a0;
- (void)_settingsGatewayReconnected:(id)a0;
- (void)updateSectionInfoBySectionIDs:(id)a0 completion:(id /* block */)a1;

@end
