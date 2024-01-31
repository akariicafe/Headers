@class TPPageHint, NSArray, TSWPStorage, TSDInfoGeometry, TSPObject, NSObject, NSString;
@protocol TSWPOffscreenColumn, TSDInfo, TSWPTopicNumberHints, TSDHint, TSDOwningAttachment;

@interface TPBodyInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider>

@property (weak, nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> previousTargetLastColumn;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumberHints;
@property (readonly, nonatomic) id<TSDHint> nextTargetFirstChildHint;
@property (readonly, nonatomic) TSWPStorage *bodyStorage;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) TPPageHint *pageHint;
@property (readonly, nonatomic) BOOL laysOutVertically;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

- (BOOL)isSelectable;
- (void).cxx_destruct;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (Class)repClass;
- (id)infoForSelectionPath:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (void)inflateBodyLayout:(id)a0;
- (id)initWithBodyStorage:(id)a0;
- (long long)modelRootIndex;

@end
