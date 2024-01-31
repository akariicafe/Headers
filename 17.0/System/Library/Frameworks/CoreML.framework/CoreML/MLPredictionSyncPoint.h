@protocol MTLSharedEvent;

@interface MLPredictionSyncPoint : NSObject

@property (readonly, nonatomic) id<MTLSharedEvent> sharedEvent;
@property (readonly, nonatomic) unsigned long long value;

- (void)notify;
- (void).cxx_destruct;
- (id)initWithSharedEvent:(id)a0 value:(unsigned long long)a1;

@end
