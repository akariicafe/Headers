@class RTLocation;

@interface RTPotentialNoiseLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (nonatomic, setter=setNoise:) BOOL isNoise;

- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;

@end
