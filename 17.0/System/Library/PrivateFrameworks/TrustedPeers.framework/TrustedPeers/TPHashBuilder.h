@interface TPHashBuilder : NSObject

@property (nonatomic) long long algo;
@property (nonatomic) struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } ctxSHA256;
@property (nonatomic) struct CC_SHA512state_st { unsigned long long count[2]; unsigned long long hash[8]; unsigned long long wbuf[16]; } ctxSHA512;

+ (id)hashWithAlgo:(long long)a0 ofData:(id)a1;
+ (long long)algoOfHash:(id)a0;
+ (id)hashWithAlgo:(long long)a0 ofBytes:(const void *)a1 len:(unsigned long long)a2;

- (id)init;
- (void)updateWithData:(id)a0;
- (void)throwInvalidAlgo;
- (id)finalHash;
- (id)initWithAlgo:(long long)a0;
- (void)updateWithBytes:(const void *)a0 len:(unsigned long long)a1;
- (void)resetWithAlgo:(long long)a0;

@end
