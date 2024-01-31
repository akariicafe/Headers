@class MLMultiArray, SNKShotLabel;

@interface SNKShotFeaturizationStreamResult : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, retain) MLMultiArray *data;
@property (nonatomic) long long datasetType;
@property (nonatomic, retain) SNKShotLabel *label;

- (id)init;
- (void).cxx_destruct;

@end
