@class NSData, WFContextualAction;

@interface WFReverseContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSData *reversalState;
@property (readonly, nonatomic) WFContextualAction *actionToReverse;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActionToReverse:(id)a0 reversalState:(id)a1;

@end
