@class IMMessage, NSString, IMChat, NSAttributedString;

@interface CKPinnedConversationSummaryBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMChat *chat;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier;
@property (readonly, nonatomic) NSAttributedString *summaryText;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) double activityItemContentScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityItemView;
- (id)initWithMessage:(id)a0 chat:(id)a1 contentScale:(double)a2 attachedContactItemIdentifier:(id)a3;
- (id)initWithSummaryText:(id)a0;
- (id)summaryAttributedStringForContentScale:(long long)a0 userInterfaceStyle:(long long)a1;
- (id)summaryLabelFontForContentScale:(long long)a0;
- (id)summaryLabelTextColorForUserInterfaceStyle:(long long)a0;

@end
