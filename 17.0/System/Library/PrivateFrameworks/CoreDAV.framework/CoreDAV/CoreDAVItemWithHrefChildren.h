@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
- (id)hrefsAsFullURLs;
- (id)description;
- (void).cxx_destruct;
- (void)addHref:(id)a0;

@end
