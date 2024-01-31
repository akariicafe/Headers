@class NSMutableArray;

@interface LWCRTypeErrorContext : NSObject {
    NSMutableArray *keyContext;
    unsigned int code;
}

- (id)init;
- (void).cxx_destruct;
- (void)setError:(unsigned int)a0;
- (id)synthesizeError;
- (void)popKey;
- (void)pushKey:(id)a0;

@end
