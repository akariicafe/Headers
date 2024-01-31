@class NSString, NSObject;
@protocol CKConversationListCellDelegate;

@interface CKConversationListEmbeddedLargeTextTableViewCell : CKConversationListLargeTextCell <CKConversationListEmbeddedTableViewCellProtocol>

@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)avatarView;
- (BOOL)avatarView:(id)a0 shouldShowContact:(id)a1;
- (void)forceUnreadIndicatorVisibility:(BOOL)a0 forConversation:(id)a1 animated:(BOOL)a2;

@end
