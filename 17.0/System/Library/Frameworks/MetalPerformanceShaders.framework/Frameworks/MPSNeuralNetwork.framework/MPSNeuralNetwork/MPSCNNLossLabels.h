@class NSData, MPSImage;

@interface MPSCNNLossLabels : MPSState {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _lossImageSize;
    BOOL _isScalarLoss;
    NSData *_userData;
    unsigned long long _userDataLayout;
    unsigned long long _numFeatureChannels_labels;
    unsigned long long _numFeatureChannels_loss;
    MPSImage *_userLabelsImage;
    MPSImage *_userWeightsImage;
    BOOL _hasStateWeights;
    BOOL _computeNonZeroWeights;
}

- (id)init;
- (void)dealloc;
- (id)initWithDevice:(id)a0 lossImageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 labelsImage:(id)a2 weightsImage:(id)a3;
- (id)lossImage;
- (id)initWithDevice:(id)a0 lossImageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 labelsDescriptor:(id)a2 weightsDescriptor:(id)a3;
- (id)labelsImage;
- (id)weightsImage;
- (id)initWithDevice:(id)a0 labelsDescriptor:(id)a1;

@end
