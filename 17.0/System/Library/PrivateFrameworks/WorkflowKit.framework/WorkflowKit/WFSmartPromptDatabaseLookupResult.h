@class NSArray, WFContentAttribution;

@interface WFSmartPromptDatabaseLookupResult : NSObject

@property (readonly, nonatomic) NSArray *allowedStates;
@property (readonly, nonatomic) NSArray *deniedStates;
@property (readonly, nonatomic) NSArray *undefinedStates;
@property (readonly, nonatomic) NSArray *restrictedStates;
@property (readonly, nonatomic) WFContentAttribution *previousAttribution;

- (void).cxx_destruct;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2 previousAttribution:(id)a3;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2 restrictedStates:(id)a3;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2 restrictedStates:(id)a3 previousAttribution:(id)a4;

@end
