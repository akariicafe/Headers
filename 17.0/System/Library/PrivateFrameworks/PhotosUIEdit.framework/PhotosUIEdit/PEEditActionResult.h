@class NSString, NSError, PEEditAction;
@protocol PEAsset;

@interface PEEditActionResult : NSObject

@property (readonly, nonatomic) NSString *sourceAssetUUID;
@property (readonly, nonatomic) PEEditAction *targetAction;
@property (retain, nonatomic) PEEditAction *sourceAction;
@property (retain, nonatomic) id<PEAsset> savedAsset;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 targetAction:(id)a1;

@end
