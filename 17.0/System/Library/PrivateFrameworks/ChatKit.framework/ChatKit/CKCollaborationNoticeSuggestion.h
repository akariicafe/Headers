@class IMCollaborationNotice, NSString, CKEntity;
@protocol CKCollaborationNoticeSuggestionDelegate, SGSuggestionDelegate;

@interface CKCollaborationNoticeSuggestion : NSObject <SGSuggestionCategory, SGSuggestionList, SGSuggestion>

@property (readonly, nonatomic) CKEntity *senderEntity;
@property (weak, nonatomic) id<CKCollaborationNoticeSuggestionDelegate> delegate;
@property (nonatomic) BOOL wantsInlineReplyStyle;
@property (readonly, nonatomic) IMCollaborationNotice *notice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;

+ (id)suggestionWithNotice:(id)a0 delegate:(id)a1 wantsInlineReplyStyle:(BOOL)a2;

- (void).cxx_destruct;
- (id)suggestionTitle;
- (id)suggestionCategoryTitleWithSenderName:(id)a0 documentTitle:(id)a1 noticeType:(long long)a2;
- (BOOL)suggestionListSupportsDismissal;
- (long long)aggregateCollaborationNoticeTypeForItems:(id)a0;
- (id)aggregateUTTypeForItems:(id)a0 withAggregateNoticeType:(long long)a1;
- (id)collaborationNoticeSuggestionsForItems:(id)a0;
- (id)collaborationTitleForUTType:(id)a0 numberOfFiles:(long long)a1;
- (id)initWithNotice:(id)a0 wantsInlineReplyStyle:(BOOL)a1;
- (long long)suggestionActionButtonType;
- (id)suggestionBackgroundVisualEffectView;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionCategoryTitleWithSenderName:(id)a0 numberOfFiles:(long long)a1 numberOfItems:(long long)a2 aggregateContentType:(id)a3 aggregateNoticeType:(long long)a4;
- (id)suggestionDismissAction;
- (id)suggestionDivider;
- (id)suggestionHandlesForItems:(id)a0;
- (id)suggestionImageSGView;
- (id)suggestionList;
- (id)suggestionListTitle;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionURLsForItems:(id)a0;

@end
