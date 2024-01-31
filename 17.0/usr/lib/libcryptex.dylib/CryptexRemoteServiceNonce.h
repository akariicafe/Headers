@interface CryptexRemoteServiceNonce : NSObject

@property (readonly, nonatomic) struct _img4_nonce { unsigned short x0; unsigned char x1[48]; unsigned int x2; } *nonce;

- (void)dealloc;
- (id)initWithNonce:(const struct _img4_nonce { unsigned short x0; unsigned char x1[48]; unsigned int x2; } *)a0;

@end
