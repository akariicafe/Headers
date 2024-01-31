@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
