@class NSString, NSHashTable;
@protocol TUConversationManagerDataSource, TUConversationMediaControllerDelegate;

@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate>

@property (readonly, nonatomic) id<TUConversationManagerDataSource> dataSource;
@property (retain, nonatomic) NSHashTable *delegates;
@property (weak, nonatomic) id<TUConversationMediaControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateConversationWithUUID:(id)a0 participantPresentationContexts:(id)a1;
- (id)initWithConversationDataSource:(id)a0;
- (void)mediaPrioritiesChangeForConversation:(id)a0;

@end
