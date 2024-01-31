@class CKAggregateAttachmentMessagePartChatItem, NSString, UIView;
@protocol CKGradientReferenceView;

@interface CKMediaObjectTapbackManager : NSObject <PXTapbackStatusManager>

@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) BOOL invertTapbackTailDirection;
@property (nonatomic) BOOL originatedFromGridView;
@property (retain, nonatomic) CKAggregateAttachmentMessagePartChatItem *chatItem;
@property (readonly, nonatomic) Class decorationViewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)hasTapbacksForAsset:(id)a0;
- (id)tapbackUserDataForAsset:(id)a0 previousAsset:(id)a1;

@end
