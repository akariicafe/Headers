@class NSString, NSSet, COCoordinationServiceClient, NSMutableDictionary;

@interface COMessagingClientInfo : NSObject

@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, copy, nonatomic) id cluster;
@property (readonly, copy, nonatomic) NSSet *handledClasses;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, weak, nonatomic) COCoordinationServiceClient *client;
@property (readonly, retain, nonatomic) NSMutableDictionary *sessions;

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0 cluster:(id)a1 handledClasses:(id)a2 client:(id)a3 activateCompletionHanlder:(id /* block */)a4;

@end
