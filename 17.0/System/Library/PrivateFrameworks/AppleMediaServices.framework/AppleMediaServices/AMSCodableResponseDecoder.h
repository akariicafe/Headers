@interface AMSCodableResponseDecoder : NSObject <AMSResponseDecoding> {
    void /* unknown type, empty encoding */ rootClass;
}

- (id)init;
- (id)resultFromResult:(id)a0 error:(id *)a1;
- (id)initWithRootClass:(Class)a0;

@end
