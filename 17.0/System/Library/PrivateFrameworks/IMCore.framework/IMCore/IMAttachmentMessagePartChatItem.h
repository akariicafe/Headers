@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem

@property (nonatomic) unsigned long long numberOfMomentShareSavedAssets;
@property (nonatomic) unsigned long long numberOfMomentSharePhotos;
@property (nonatomic) unsigned long long numberOfMomentShareVideos;
@property (nonatomic) BOOL needsReloadForCommSafetyStateChange;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, nonatomic) BOOL parentChatIsSpam;
@property (readonly, nonatomic) BOOL wantsAttachmentContiguous;

- (unsigned char)contentType;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)layoutGroupIdentifier;
- (id)messageSummaryInfo;
- (long long)syndicationBehavior;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUID:(id)a4 chatContext:(id)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUID:(id)a4 chatContext:(id)a5 visibleAssociatedMessageChatItems:(id)a6;
- (BOOL)_wantsAttachmentContiguousForType:(id)a0;
- (BOOL)isAttachmentContiguousWithChatItem:(id)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;

@end
