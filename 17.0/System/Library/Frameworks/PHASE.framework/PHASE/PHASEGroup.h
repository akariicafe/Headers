@class NSString, PHASEEngine;

@interface PHASEGroup : NSObject {
    unsigned long long _hashId;
    double _gain;
    double _rate;
}

@property (nonatomic) double gainHighFrequency;
@property (nonatomic) double gainLowFrequency;
@property (readonly, nonatomic) NSString *uid;
@property (readonly) BOOL isMuted;
@property (readonly) BOOL isSoloed;
@property (weak, nonatomic) PHASEEngine *engine;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) double gain;
@property (nonatomic) double rate;
@property (readonly, getter=isMuted) BOOL muted;
@property (readonly, getter=isSoloed) BOOL soloed;

+ (id)new;

- (void)mute;
- (id)initWithIdentifier:(id)a0;
- (void)unmute;
- (id)init;
- (id)uid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)solo;
- (void)fadeGain:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (void)fadeGainHighFrequency:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (void)fadeGainLowFrequency:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (void)fadeRate:(double)a0 duration:(double)a1 curveType:(long long)a2;
- (double)gainHF;
- (double)gainLF;
- (id)initWithEngine:(id)a0 identifier:(id)a1;
- (id)initWithEngine:(id)a0 uid:(id)a1;
- (void)registerWithEngine:(id)a0;
- (void)unregisterFromEngine;
- (void)unsolo;

@end
