@class ATXPBContextualActionsGroupedUIFeedbackResult;

@interface ATXShortcutsEditorGroupedUIFeedbackResult : ATXProactiveSuggestionGroupedUIFeedbackResult <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBContextualActionsGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numShortcutsAtStart;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) unsigned long long numManuallyAddedSteps;

- (id)initWithProto:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXContextualActionsGroupedUIFeedbackResult:(id)a0;

@end
