@class COMessageChannel, NSMutableDictionary, NSString, NSObject;
@protocol COMessageSessionConsumerDelegate, OS_dispatch_queue;

@interface COMessageSessionConsumer : NSObject

@property (readonly, weak, nonatomic) COMessageChannel *messageChannel;
@property (weak, nonatomic) id<COMessageSessionConsumerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (readonly, retain, nonatomic) NSString *subTopic;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0 subTopic:(id)a1 delegate:(id)a2 dispatchQueue:(id)a3;

@end
