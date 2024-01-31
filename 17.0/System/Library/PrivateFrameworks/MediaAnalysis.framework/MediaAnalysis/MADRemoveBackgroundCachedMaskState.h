@class VNInstanceMaskObservation, NSString;

@interface MADRemoveBackgroundCachedMaskState : NSObject {
    NSString *_identifier;
}

@property (readonly, nonatomic) VNInstanceMaskObservation *instanceMaskObservation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;

- (void).cxx_destruct;
- (id)initWithImageAsset:(id)a0 instanceMaskObservation:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)matchesImageAsset:(id)a0;

@end
