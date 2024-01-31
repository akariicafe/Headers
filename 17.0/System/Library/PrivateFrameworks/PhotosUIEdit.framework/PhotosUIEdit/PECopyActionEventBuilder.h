@class PICompositionController;
@protocol PEAsset;

@interface PECopyActionEventBuilder : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (copy, nonatomic) PICompositionController *copiedCompositionController;

- (void).cxx_destruct;
- (id)buildEvent;

@end
