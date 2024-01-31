@class AVHapticClient;

@interface AVHapticPlayerChannel : NSObject {
    unsigned long long _behavior;
}

@property unsigned long long chanID;
@property (weak) AVHapticClient *client;
@property unsigned long long eventBehavior;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)clearEvents:(double)a0 error:(id *)a1;
- (id)initWithChannelID:(id)a0 client:(id)a1;
- (BOOL)resetAtTime:(double)a0 error:(id *)a1;
- (BOOL)scheduleParameterCurve:(unsigned long long)a0 curve:(id)a1 atTime:(double)a2 error:(id *)a3;
- (BOOL)sendEvents:(id)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)sendEvents:(id)a0 withImmediateParameters:(id)a1 atTime:(double)a2 error:(id *)a3;
- (BOOL)setParameter:(unsigned long long)a0 value:(float)a1 atTime:(double)a2 error:(id *)a3;

@end
