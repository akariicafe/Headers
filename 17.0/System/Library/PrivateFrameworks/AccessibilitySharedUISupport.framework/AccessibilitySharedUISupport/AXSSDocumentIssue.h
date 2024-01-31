@class NSArray, AXSSDocumentNode, NSString, NSAttributedString;

@interface AXSSDocumentIssue : NSObject

@property (retain, nonatomic) AXSSDocumentNode *node;
@property (copy, nonatomic) NSAttributedString *offendingText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) NSString *note;
@property (nonatomic) long long severity;
@property (nonatomic) unsigned long long kind;
@property (nonatomic) BOOL autoMatchSuggestionAttributes;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_updateSuggestionStyleIfNeeded;

@end
