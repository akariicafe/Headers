@class COMessageChannel, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, COMessageSessionProducerDelegate;

@interface COMessageSessionProducer : NSObject

@property (readonly, weak, nonatomic) COMessageChannel *messageChannel;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, weak, nonatomic) id<COMessageSessionProducerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (readonly, copy, nonatomic) NSString *subTopic;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0 subTopic:(id)a1 delegate:(id)a2 dispatchQueue:(id)a3;
- (void)startSessionWithMembers:(id)a0;

@end
