@class TSDInfoGeometry, TSPObject, NSString, NSObject, SXTextTangierFlowStorage;
@protocol TSDRepDirectLayerHosting, TSDContainerInfo, TSDOwningAttachment;

@interface SXTextTangierFlowInfo : NSObject <TSDContainerInfo, SXTangierRepDirectLayerHostingInfo>

@property (readonly, nonatomic) SXTextTangierFlowStorage *storage;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (weak, nonatomic) id<TSDRepDirectLayerHosting> directLayerHost;
@property (readonly, nonatomic) BOOL hasSpeakableContent;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

- (void).cxx_destruct;
- (Class)layoutClass;
- (id)copyWithContext:(id)a0;
- (BOOL)anchoredToText;
- (BOOL)attachedToBodyText;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)floatingAboveText;
- (id)initWithStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)inlineWithText;
- (BOOL)isThemeContent;
- (Class)repClass;

@end
