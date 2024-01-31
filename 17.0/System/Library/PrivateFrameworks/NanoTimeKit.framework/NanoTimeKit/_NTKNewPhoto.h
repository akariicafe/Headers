@class PHAsset;

@interface _NTKNewPhoto : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop;
@property (nonatomic) unsigned long long subsampleFactor;

- (void).cxx_destruct;

@end
