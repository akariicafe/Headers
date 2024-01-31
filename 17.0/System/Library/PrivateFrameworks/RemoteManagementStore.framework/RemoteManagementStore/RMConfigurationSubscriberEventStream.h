@class NSArray;

@interface RMConfigurationSubscriberEventStream : RMConfigurationSubscriberClient

@property (retain, nonatomic) id eventStreamObserver;
@property (readonly, nonatomic) NSArray *configurationTypes;
@property (readonly, nonatomic) long long scope;

+ (id)_configuredConfigurationTypesWithScope:(long long)a0;
+ (id)_eventDescriptorByNameForEventStreamNamed:(id)a0;
+ (void)_setupEventHandlerWithScope:(long long)a0;
+ (id)newConfigurationSubscriberEventStreamWithScope:(long long)a0 applicators:(id)a1 publisherClass:(Class)a2;

- (void)_handleEvent:(id)a0;
- (void)dealloc;
- (id)initWithScope:(long long)a0;
- (void)start;
- (void).cxx_destruct;
- (void)_setupEventHandler;
- (void)_fetchConfigurations:(id)a0;

@end
