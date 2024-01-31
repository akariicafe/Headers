@class NSDictionary, SUUIReportAConcernMetadata;

@interface SUUIReportAConcernOperation : ISOperation

@property (retain, nonatomic) SUUIReportAConcernMetadata *metadata;
@property (copy) NSDictionary *responseDictionary;

- (void)run;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)_httpBody;

@end
