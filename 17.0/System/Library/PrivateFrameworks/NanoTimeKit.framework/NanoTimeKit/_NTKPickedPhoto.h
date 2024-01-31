@class NTKPhoto, PHAsset;

@interface _NTKPickedPhoto : NSObject

@property (retain, nonatomic) NTKPhoto *photo;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) unsigned long long subsampleFactor;

- (void).cxx_destruct;

@end
