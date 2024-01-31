@class NSString;

@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *noIssuesDescription;
@property (copy, nonatomic) NSString *defaultIssuePrefix;

- (id)init;
- (void).cxx_destruct;
- (id)_componentsFromReport:(id)a0;
- (id)stringFromReport:(id)a0;

@end
