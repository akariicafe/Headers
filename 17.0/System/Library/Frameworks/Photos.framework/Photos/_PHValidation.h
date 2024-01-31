@class NSError;

@interface _PHValidation : NSObject {
    unsigned long long _requestedOptions;
    unsigned long long _validatedOptions;
    NSError *_error;
}

- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)assert:(BOOL)a0 code:(long long)a1 format:(id)a2;
- (void)assert:(BOOL)a0 error:(id)a1;
- (void)validateOption:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
