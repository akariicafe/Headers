@class NSArray;

@interface SNKShotSegmentationRequest : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, copy) NSArray *fileURLs;
@property (nonatomic) float backgroundEnergyPercentile;
@property (nonatomic) float foregroundEnergyPercentile;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } hangoverDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minSegmentDuration;
@property (nonatomic) float similarityThreshold;

- (id)init;
- (void).cxx_destruct;

@end
