@class NSString, SFCollaborationItemsProvider, NSObject, DummySFCollaborationService;
@protocol OS_dispatch_queue, SFCollaborationCompositionDictionaryProviderDelegate;

@interface SFCollaborationCompositionDictionaryProvider : NSObject <SFCollaborationItemChangeObserver, SFCollaborationItemsProviderDelegate>

@property (retain, nonatomic) SFCollaborationItemsProvider *collaborationItemsProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) DummySFCollaborationService *collaborationService;
@property (retain, nonatomic) id<SFCollaborationCompositionDictionaryProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0 delegate:(id)a1;
- (id)collaborationItemsProvider:(id)a0 resolveActivityItem:(id)a1;
- (id)collaborationServiceForItemsProvider:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1;

@end
