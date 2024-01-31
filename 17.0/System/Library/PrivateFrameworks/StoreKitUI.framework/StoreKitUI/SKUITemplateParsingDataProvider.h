@class NSRegularExpression;

@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer

@property (readonly, nonatomic) NSRegularExpression *regularExpression;

+ (id)templateParsingRegularExpression;

- (void).cxx_destruct;
- (id)objectForData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)initWithRegularExpression:(id)a0;

@end
