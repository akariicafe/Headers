@class NSString, NSMutableDictionary, NSLock;

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {
    id /* block */ _publishingHandler;
    NSString *_subscriberID;
    NSMutableDictionary *_proxiesByPublisherID;
    BOOL _started;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)observePublisherUserInfoForID:(id)a0 value:(id)a1 forKey:(id)a2;
- (oneway void)addPublisher:(id)a0 forID:(id)a1 withValues:(id)a2 isOld:(BOOL)a3;
- (void)dealloc;
- (oneway void)observePublisherForID:(id)a0 values:(id)a1 forKeys:(id)a2;
- (oneway void)removePublisherForID:(id)a0;
- (void)stop;
- (id)initWithPublishingHandler:(id /* block */)a0;
- (void)startForCategory:(id)a0;
- (void)startForFileURL:(id)a0;

@end
