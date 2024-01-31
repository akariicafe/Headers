@class NSString, NSArray, NSData, NSMutableArray;

@interface FaceTimePushHandler : NSObject <IDSPushHandlerDelegate> {
    NSMutableArray *_handlers;
    NSArray *_topics;
    BOOL _registeredForPush;
    BOOL _isListening;
}

@property (readonly, nonatomic) NSData *pushToken;
@property (nonatomic) BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandToHandlerBlock;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)dealloc;
- (void)_acceptIncomingPushes;
- (id)copyHandlersForEnumerating;
- (void)configureAsMacNotificationCenterObserver:(id)a0;
- (id)initWithTopics:(id)a0;
- (void)handler:(id)a0 didReceiveMessage:(id)a1 forTopic:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (id)_pushTopics;
- (void)_ignoreIncomingPushes;
- (void)_updateListenerIfNeeded;

@end
