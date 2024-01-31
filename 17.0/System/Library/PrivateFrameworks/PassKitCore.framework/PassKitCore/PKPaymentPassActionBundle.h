@class NSArray;

@interface PKPaymentPassActionBundle : NSObject

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSArray *actionGroups;

- (void).cxx_destruct;
- (id)actionsMatchingTypes:(id)a0;
- (void)setOrAddActionGroups:(id)a0;
- (void)setOrAddActions:(id)a0;

@end
