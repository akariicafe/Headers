@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isOpaque) BOOL opaque;
@property (copy, nonatomic) NSString *formatIdentifier;
@property (copy, nonatomic) NSString *formatVersion;
@property (copy, nonatomic) NSString *editorBundleID;
@property (nonatomic) long long baseVersion;
@property (readonly) NSData *data;

+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)a0;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)a0;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)a0;
+ (id)opaqueAdjustmentData;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasAdjustments;
- (BOOL)_contentEditing_containsValidAdjustment;
- (BOOL)_contentEditing_readableByClientWithVerificationBlock:(id /* block */)a0;
- (long long)_contentEditing_requiredBaseVersionReadableByClient:(BOOL *)a0 verificationBlock:(id /* block */)a1;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 data:(id)a2;

@end
