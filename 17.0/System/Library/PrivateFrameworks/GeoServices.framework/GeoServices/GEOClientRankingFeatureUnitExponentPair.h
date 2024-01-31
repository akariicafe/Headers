@class GEOClientRankingFeatureUnit;

@interface GEOClientRankingFeatureUnitExponentPair : NSObject

@property (readonly, nonatomic) GEOClientRankingFeatureUnit *unit;
@property (readonly, nonatomic) unsigned int exponent;

- (void).cxx_destruct;
- (id)initWithUnit:(id)a0 exponent:(unsigned int)a1;

@end
