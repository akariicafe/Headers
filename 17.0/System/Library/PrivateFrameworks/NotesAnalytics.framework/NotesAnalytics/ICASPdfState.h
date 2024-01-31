@interface ICASPdfState : NSObject <AADataType>

@property (readonly, nonatomic) long long pdfState;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithPdfState:(long long)a0;

@end
