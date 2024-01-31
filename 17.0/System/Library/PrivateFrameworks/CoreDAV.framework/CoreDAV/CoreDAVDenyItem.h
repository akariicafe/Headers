@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)init;
- (void)addPrivilege:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
