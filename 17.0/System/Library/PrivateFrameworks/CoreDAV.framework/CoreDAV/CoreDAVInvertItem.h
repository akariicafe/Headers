@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
