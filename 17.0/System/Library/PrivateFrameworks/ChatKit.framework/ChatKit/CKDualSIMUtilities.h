@class NSDictionary;

@interface CKDualSIMUtilities : NSObject

@property (class, readonly, nonatomic) CKDualSIMUtilities *sharedUtilities;

@property (retain, nonatomic) NSDictionary *conversationListSIMLabelImagesDictionary;

+ (id)_imageForLastUsedSIMForConversation:(id)a0;
+ (id)_textAttachmentForLastUsedSIMForConversation:(id)a0;
+ (id)makeSummaryAttributedStringWithSIMImageUsingAttributedString:(id)a0 forConversation:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_conversationListSIMLabelImageForSIMID:(id)a0;
- (id)_conversationListSIMLabels;
- (void)_createConversationListSIMLabelImagesDictionary;
- (void)_handleSIMSubscriptionsUpdate:(id)a0;
- (void)_resizeSIMLabel:(id)a0;
- (void)prewarmConversationListSIMLabelImagesDictionary;
- (void)updateConversationListSIMLabelImagesDictionary;

@end
