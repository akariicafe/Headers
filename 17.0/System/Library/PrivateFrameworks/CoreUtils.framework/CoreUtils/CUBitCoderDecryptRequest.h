@class NSData;

@interface CUBitCoderDecryptRequest : NSObject

@property (copy, nonatomic) NSData *aad;
@property (nonatomic) unsigned long long authTagLength;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *nonce;

- (void).cxx_destruct;

@end
