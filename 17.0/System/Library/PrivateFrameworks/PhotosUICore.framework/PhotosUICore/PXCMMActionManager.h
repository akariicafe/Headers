@class NSMutableDictionary;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;
@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> performerDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)a0;
- (Class)actionPerformerClassForActionType:(id)a0;
- (id)messageComposeActionPerformer;
- (id)photosPickerActionPerformer;
- (id)publishActionPerformer;
- (id)sendBackActionPerformer;

@end
