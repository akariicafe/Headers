@class NSURL, NSString, NSArray;

@interface SKUIReportAConcernTemplateViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSURL *reportConcernURL;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, copy, nonatomic) NSString *reportConcernExplanation;
@property (readonly, copy, nonatomic) NSArray *reasonElements;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
