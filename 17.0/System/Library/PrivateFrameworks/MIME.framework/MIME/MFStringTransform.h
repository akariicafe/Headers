@interface MFStringTransform : NSObject {
    void **_underlying;
}

+ (id)identityTransform;

- (id)init;
- (void)dealloc;
- (id)_init;
- (id)initWithSoftBankHexData:(id)a0;

@end
