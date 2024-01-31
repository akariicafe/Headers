@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFConversationStore : NSObject

@property (readonly, nonatomic, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)_registerConversation:(id)a0 withIdentifier:(id)a1;
- (void)fetchConversationWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeConversationWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveConversation:(id)a0 withIdentifier:(id)a1 completionBlock:(id /* block */)a2;

@end
