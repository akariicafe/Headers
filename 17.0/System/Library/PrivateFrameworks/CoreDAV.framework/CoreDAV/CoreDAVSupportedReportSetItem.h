@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (id)init;
- (void)addSupportedReport:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)supportsReportWithNameSpace:(id)a0 andName:(id)a1;

@end
