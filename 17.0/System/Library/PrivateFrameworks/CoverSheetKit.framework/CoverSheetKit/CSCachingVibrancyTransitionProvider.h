@class BSUIVibrancyLUT;

@interface CSCachingVibrancyTransitionProvider : NSObject

@property (copy, nonatomic) BSUIVibrancyLUT *cachedVibrancyLUT;

- (void).cxx_destruct;
- (id)vibrancyLUTWithStartingLUT:(id)a0 transitionProgress:(double)a1 toIdentifier:(id)a2;

@end
