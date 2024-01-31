@class NSSet, NSArray, PHAssetCollection;

@interface PXCMMSendBackSuggestion : NSObject

@property (readonly, nonatomic) NSSet *participants;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 participants:(id)a1;

@end
