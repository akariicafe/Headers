@class NSArray;

@interface _VNLowResAlphaMask : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_instanceLowResMaskArray;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isSingleMask;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __CVBuffer { } *)_alphaMaskAtIndex:(unsigned long long)a0;
- (id)initWithAlphaMaskArray:(id)a0;
- (id)initWithSingleAlphaMask:(struct __CVBuffer { } *)a0;

@end
