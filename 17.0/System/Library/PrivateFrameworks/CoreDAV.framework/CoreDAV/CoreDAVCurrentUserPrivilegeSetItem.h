@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (BOOL)hasPrivilegeWithNameSpace:(id)a0 andName:(id)a1;
- (void)addPrivilege:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
