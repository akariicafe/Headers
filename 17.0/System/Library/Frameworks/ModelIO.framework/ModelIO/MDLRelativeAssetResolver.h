@class NSString, MDLAsset;

@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver>

@property (weak, nonatomic) MDLAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
