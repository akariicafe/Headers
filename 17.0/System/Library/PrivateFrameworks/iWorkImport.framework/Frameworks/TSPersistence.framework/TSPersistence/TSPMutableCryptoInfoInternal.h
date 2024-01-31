@class NSArray, NSString, SFUCryptoKey;

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>

@property (readonly, nonatomic) SFUCryptoKey *cryptoKey;
@property (readonly, nonatomic) unsigned long long preferredBlockSize;
@property (readonly, nonatomic) NSArray *blockInfos;
@property (readonly, nonatomic) BOOL hasDecodedLength;
@property (readonly, nonatomic) unsigned long long decodedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)addBlockInfo:(id)a0;
- (void)incrementDecodedLengthBy:(unsigned long long)a0;
- (id)initWithCryptoKey:(id)a0 preferredBlockSize:(unsigned long long)a1 blockInfos:(id)a2 decodedLength:(unsigned long long)a3;

@end
