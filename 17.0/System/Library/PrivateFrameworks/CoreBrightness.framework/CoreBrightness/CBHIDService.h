@class NSObject;
@protocol OS_os_log;

@interface CBHIDService : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) unsigned long long registryID;
@property struct __IOHIDEvent { } *event;
@property (readonly) BOOL builtIn;

- (id)copyPropertyForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)updateEventData;
- (BOOL)conformsToHIDService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)conformsToUsagePage:(unsigned long long)a0 andUsage:(unsigned long long)a1;
- (id)initWithHIDServiceClient:(struct __IOHIDServiceClient { } *)a0 andIdentifier:(id)a1;
- (BOOL)setPropertyForKey:(id)a0 withValue:(id)a1;

@end
