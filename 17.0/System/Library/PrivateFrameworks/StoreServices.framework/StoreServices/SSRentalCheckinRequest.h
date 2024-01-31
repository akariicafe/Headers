@class NSArray, NSNumber;

@interface SSRentalCheckinRequest : SSRequest {
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property (readonly) NSArray *sinfs;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;

- (id)init;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithAccountIdentifier:(id)a0 rentalKeyIdentifier:(id)a1;
- (id)initWithSinfs:(id)a0;
- (void)startWithConnectionResponseBlock:(id /* block */)a0;

@end
