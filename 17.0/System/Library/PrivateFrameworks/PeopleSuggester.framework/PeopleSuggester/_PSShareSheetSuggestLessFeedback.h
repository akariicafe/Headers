@class NSString;

@interface _PSShareSheetSuggestLessFeedback : NSObject

@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *conversationId;
@property (readonly, copy, nonatomic) NSString *derivedIntentId;
@property (readonly, copy, nonatomic) NSString *contactId;
@property (readonly, copy, nonatomic) NSString *handle;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 conversationId:(id)a1 derivedIntentId:(id)a2 handle:(id)a3 contactId:(id)a4;
- (id)initWithBundleId:(id)a0 conversationId:(id)a1 handle:(id)a2 contactId:(id)a3;
- (id)knowledgeEvent;

@end
