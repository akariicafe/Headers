@class NSString, ASDServiceBroker;

@interface ASDSkannerService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (class, readonly) ASDSkannerService *defaultService;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (void)fetchStoriesWithCompletionHandler:(id /* block */)a0;

@end
