@class NSData;

@interface COSE_Mac0 : COSE

@property (readonly, nonatomic) NSData *mac;

- (id)description;
- (void).cxx_destruct;
- (id)generateMessageForMACWithApplicationProtectedAttributes:(id)a0;
- (id)initWithCBOR:(id)a0;
- (id)initWithProtectedHeaders:(id)a0 unprotectedHeaders:(id)a1 payload:(id)a2 tag:(id)a3;

@end
