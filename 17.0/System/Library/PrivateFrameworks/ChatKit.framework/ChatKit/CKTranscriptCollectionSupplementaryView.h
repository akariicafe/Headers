@class NSString;

@interface CKTranscriptCollectionSupplementaryView : UICollectionReusableView <CKTranscriptSupplementaryViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKindForGUID:(id)a0;
+ (id)supplementaryViewKindPrefix;

- (void)configureForChatItem:(id)a0 context:(id)a1;

@end
