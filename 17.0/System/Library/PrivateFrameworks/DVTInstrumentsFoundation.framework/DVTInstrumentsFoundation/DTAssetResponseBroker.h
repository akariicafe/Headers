@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DTAssetResponseBroker : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeHandlersQueue;

+ (id)sharedBroker;

- (void)registerHandler:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardMessage:(id)a0;
- (id)activeHandlerWithIdentifier:(id)a0;
- (BOOL)canContinueServingRequestWithIdentifier:(id)a0;
- (void)unregisterHandler:(id)a0;

@end
