@class NSString, CKMentionEntityNode;

@interface CKMentionAutoCompleteAttribute : NSObject

@property (retain, nonatomic) CKMentionEntityNode *mentionEntityNode;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *displayText;

- (void).cxx_destruct;
- (id)initWithMentionEntityNode:(id)a0 originalText:(id)a1 displayText:(id)a2;

@end
