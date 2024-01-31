@interface IDSCurrentServerTimePair : NSObject

@property (readonly, nonatomic) unsigned long long initialProcessMonotonicTimeInNanoSeconds;
@property (readonly, nonatomic) unsigned long long initialServerTimeInNanoSeconds;
@property (readonly, nonatomic) BOOL isAccurate;

- (id)initWithInitialProcessMonotonicTimeInNanoSeconds:(unsigned long long)a0 initialServerTimeInNanoSeconds:(unsigned long long)a1 isAccurate:(BOOL)a2;

@end
