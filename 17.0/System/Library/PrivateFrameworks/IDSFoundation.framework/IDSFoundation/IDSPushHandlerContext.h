@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface IDSPushHandlerContext : NSObject {
    NSSet *_topics;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSSet *wakingTopics;
@property (retain, nonatomic) NSSet *opportunisticTopics;
@property (retain, nonatomic) NSSet *nonWakingTopics;
@property (copy, nonatomic) NSSet *commands;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 wakingTopics:(id)a1 opportunisticTopics:(id)a2 nonWakingTopics:(id)a3 commands:(id)a4;

@end
