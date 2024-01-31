@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
}

@property (nonatomic) BOOL isMissingData;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 decryptionKey:(id)a1;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;

@end
