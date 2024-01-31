@class WFContextualAction, NSString, ATXActionCriteria, CSSearchableItem;

@interface ATXShortcutsAction : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol> {
    ATXActionCriteria *_criteria;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)isEqualToAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contextualActionGetDirections;
- (id)initWithContextualAction:(id)a0 criteria:(id)a1;

@end
