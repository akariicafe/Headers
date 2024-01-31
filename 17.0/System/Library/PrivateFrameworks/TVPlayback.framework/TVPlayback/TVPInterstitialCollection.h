@class NSArray;

@interface TVPInterstitialCollection : NSObject

@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *interstitialsWithAdjacentsMerged;
@property (retain, nonatomic) id backingData;

- (void).cxx_destruct;
- (id)initWithInterstitials:(id)a0;
- (id)interstitialForTime:(double)a0;
- (id)mergedInterstitialForTime:(double)a0;
- (double)timeAdjustedByIncludingInterstitials:(double)a0;
- (double)timeAdjustedByRemovingInterstitials:(double)a0;

@end
