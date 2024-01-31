@class CKXSchema;

@interface CKXWriterBase : NSObject

@property (readonly, nonatomic) CKXSchema *schema;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
