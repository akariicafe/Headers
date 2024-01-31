@class NSString, NSArray;

@interface AXMAudioDataSource : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) void *sampleBuffer;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long currentSampleIndex;
@property (nonatomic, getter=isCircular) BOOL circular;
@property (nonatomic) double level;
@property (readonly, nonatomic) NSArray *effectsChain;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)processEffects:(unsigned long long)a0;
- (void)addEffectToChain:(id)a0;
- (id)initWithName:(id)a0 sampleRate:(double)a1 circular:(BOOL)a2;
- (void)normalizeAudio;
- (void)removeEffectFromChain:(id)a0;

@end
