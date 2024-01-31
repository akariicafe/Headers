@class NSString;

@interface UCAppClipCodeURLEncoder : NSObject <UCAppClipCodeURLEncodingPrivate, UCAppClipCodeURLEncoding> {
    struct unique_ptr<UC::SUE::SegmentedURLEncoderImpl, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> { struct __compressed_pair<UC::SUE::SegmentedURLEncoderImpl *, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> { struct SegmentedURLEncoderImpl *__value_; } __ptr_; } _segmentedEncoder;
    struct unique_ptr<UC::SUE::PrefixedURLEncoderImpl, std::default_delete<UC::SUE::PrefixedURLEncoderImpl>> { struct __compressed_pair<UC::SUE::PrefixedURLEncoderImpl *, std::default_delete<UC::SUE::PrefixedURLEncoderImpl>> { struct PrefixedURLEncoderImpl *__value_; } __ptr_; } _prefixedURLEncoder;
    long long _codingVersion;
    long long _compressionVersion;
}

@property (readonly, nonatomic) long long codingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encoderWithExtendedInterfaceWithVersion:(long long)a0;
+ (id)encoderWithVersion:(long long)a0;

- (void)clearCaches;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_convertRawURLEncodingBitsToAppClipCodeData:(const void *)a0;
- (struct shared_ptr<UC::SUE::UCSegmentedURLEncodingResult> { struct UCSegmentedURLEncodingResult *x0; struct __shared_weak_count *x1; })_encodeURL:(id)a0 error:(id *)a1;
- (id)_errorFromCoderError:(const void *)a0;
- (id)_errorWithCoderErrorCode:(long long)a0 codingErrorSymbol:(id)a1 message:(id)a2;
- (id)_errorWithUnsupportedURLComponentType:(long long)a0;
- (id)encodeURL:(id)a0 error:(id *)a1;
- (id)encodeURLV0:(id)a0 error:(id *)a1;
- (id)encodeURLV1:(id)a0 error:(id *)a1;
- (id)initWithCodingVersion:(long long)a0;
- (id)resultForEncodingURL:(id)a0 error:(id *)a1;

@end
