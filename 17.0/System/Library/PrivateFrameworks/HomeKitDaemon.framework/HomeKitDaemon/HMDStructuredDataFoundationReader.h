@class NSEnumerator, NSDictionary, NSMutableArray;

@interface HMDStructuredDataFoundationReader : HMDTokenBasedStructuredReader {
    NSEnumerator *_enumerator;
    NSDictionary *_dictionary;
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;

@end
