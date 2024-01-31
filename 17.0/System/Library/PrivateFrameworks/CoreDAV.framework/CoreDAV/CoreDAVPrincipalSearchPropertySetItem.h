@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addPrincipalSearchProperty:(id)a0;

@end
