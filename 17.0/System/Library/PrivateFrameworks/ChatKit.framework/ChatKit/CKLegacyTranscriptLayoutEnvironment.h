@class UICollectionView, CKChatItem, CKConversation;
@protocol NSCollectionLayoutEnvironment;

@interface CKLegacyTranscriptLayoutEnvironment : NSObject

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) id<NSCollectionLayoutEnvironment> collectionLayoutEnvironment;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic) long long layoutContext;
@property (retain, nonatomic) CKChatItem *previousItem;

- (id)init;
- (void).cxx_destruct;

@end
