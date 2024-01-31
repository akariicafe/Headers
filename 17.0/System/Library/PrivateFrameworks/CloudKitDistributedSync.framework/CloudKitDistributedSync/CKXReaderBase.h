@class CKXSchema;

@interface CKXReaderBase : NSObject

@property (readonly, nonatomic) CKXSchema *schema;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
