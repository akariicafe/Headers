@interface MBDigestSHA256 : MBDigest {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _context;
}

- (id)init;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)final;
- (void)finalWithBytes:(void *)a0 length:(unsigned long long)a1;

@end
