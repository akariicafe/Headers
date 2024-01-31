@class NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUConversationAwarenessControllerDelegate;

@interface MRUConversationAwarenessController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUConversationAwarenessControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isConversationAwarenessSupported) BOOL conversationAwarenessSupported;
@property (readonly, nonatomic, getter=isConversationAwarenessEnabled) BOOL conversationAwarenessEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOutputDeviceRouteController:(id)a0;
- (void).cxx_destruct;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)setConversationAwarenessEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateConversationAwarenessEnabled;
- (void)updateConversationAwarenessSupported;

@end
