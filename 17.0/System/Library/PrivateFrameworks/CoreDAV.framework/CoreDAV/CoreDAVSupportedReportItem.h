@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *report;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
