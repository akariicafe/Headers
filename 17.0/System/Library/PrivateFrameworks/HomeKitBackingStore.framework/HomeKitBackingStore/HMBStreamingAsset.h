@class NSString, CKStreamingAsset;

@interface HMBStreamingAsset : HMFObject <NSSecureCoding, HMBModelNativeCKWrapper, HMBModelObjectMerging>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) BOOL includeInModelEncoding;

@property (retain, nonatomic) CKStreamingAsset *uploadStreamingAsset;
@property (retain, nonatomic) CKStreamingAsset *downloadStreamingAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;
+ (void)applyNativeCKValue:(id)a0 fromSource:(unsigned long long)a1 associatingWith:(id)a2 toModel:(id)a3 propertyNamed:(id)a4;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (id)hmbObjectByMergingFromObject:(id)a0;
- (id)initWithUploadStreamingAsset:(id)a0;
- (id)initWithUploadStreamingAsset:(id)a0 downloadStreamingAsset:(id)a1;
- (id)nativeCKValueWithEncodingContext:(id)a0 error:(id *)a1;

@end
