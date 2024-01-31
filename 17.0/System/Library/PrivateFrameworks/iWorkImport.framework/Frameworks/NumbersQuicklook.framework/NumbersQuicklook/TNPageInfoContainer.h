@class TSDInfoGeometry, NSArray, TSPObject, NSString, NSObject, TNPageController;
@protocol TSDInfo, TSDOwningAttachment;

@interface TNPageInfoContainer : NSObject <TSDContainerInfo>

@property (readonly, weak, nonatomic) TNPageController *pageController;
@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
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
- (id)initWithPageIndex:(unsigned long long)a0 pageController:(id)a1;

@end
