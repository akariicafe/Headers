@class IOSurfaceSharedEvent;

@interface _ANESharedWaitEvent : NSObject

@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned long long eventType;

+ (id)new;
+ (id)waitEventWithValue:(unsigned long long)a0 sharedEvent:(id)a1 eventType:(unsigned long long)a2;
+ (id)waitEventWithValue:(unsigned long long)a0 sharedEvent:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(unsigned long long)a0 sharedEvent:(id)a1 eventType:(unsigned long long)a2;

@end
