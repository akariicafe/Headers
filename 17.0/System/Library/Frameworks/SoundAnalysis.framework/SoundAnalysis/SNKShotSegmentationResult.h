@class MLMultiArray, NSArray, NSNumber;

@interface SNKShotSegmentationResult : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, retain) MLMultiArray *exemplarEmbedding;
@property (nonatomic, copy) NSArray *segments;
@property (nonatomic, retain) NSNumber *exemplarIndex;

- (id)init;
- (void).cxx_destruct;

@end
