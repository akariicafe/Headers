@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject

@property (readonly, nonatomic) NSArray *implementingQueryMethods;
@property (readonly, nonatomic) NSArray *nonImplementingQueryMethods;
@property (readonly, nonatomic) NSDictionary *queryMethodsToDescriptions;
@property (readonly, nonatomic) NSArray *contextMethods;
@property (readonly, nonatomic) NSDictionary *contextMethodsToDescriptions;

- (id)initWithModifier:(id)a0;
- (void).cxx_destruct;
- (void)_buildFromModifier:(id)a0;

@end
