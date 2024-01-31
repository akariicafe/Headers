@interface CKSSShare : NSObject {
    struct ccss_shamir_share { struct cczp *x0; unsigned int x1; unsigned long long x2[0]; } *_share;
    unsigned long long _share_size;
}

- (struct ccss_shamir_share { struct cczp *x0; unsigned int x1; unsigned long long x2[0]; } *)share;
- (unsigned int)x;
- (id)y;
- (void)dealloc;
- (id)initWithParams:(struct ccss_shamir_parameters { unsigned int x0; struct cczp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } x1; } *)a0 share:(struct ccss_shamir_share { struct cczp *x0; unsigned int x1; unsigned long long x2[0]; } *)a1;
- (id)initWithParams:(struct ccss_shamir_parameters { unsigned int x0; struct cczp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } x1; } *)a0 x:(unsigned int)a1 y:(id)a2;

@end
