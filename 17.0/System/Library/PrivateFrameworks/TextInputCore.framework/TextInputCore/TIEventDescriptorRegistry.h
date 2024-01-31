@class NSDictionary, NSMutableDictionary, NSLock;

@interface TIEventDescriptorRegistry : NSObject {
    NSMutableDictionary *_eventDescriptors;
    NSMutableDictionary *_eventSpecs;
    NSLock *_lock;
}

@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSDictionary *eventDescriptors;
@property (readonly, nonatomic) NSDictionary *eventSpecs;
@property (nonatomic) BOOL loaded;

+ (id)registry;
+ (id)registryWithConfig:(id)a0;
+ (id)registryWithDescriptors:(id)a0 andSpecs:(id)a1;

- (id)initWithConfig:(id)a0;
- (void)loadEventDescriptorsIfNecessary;
- (id)initWithDescriptors:(id)a0 andSpecs:(id)a1;
- (id)eventSpecWithName:(id)a0;
- (id)contextFromError:(id)a0;
- (id)valueFromError:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)allEventDescriptors;
- (void)_loadEventDescriptors;
- (id)eventDescriptorWithName:(id)a0;

@end
