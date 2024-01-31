@class NSString;

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (copy) NSString *accessibilityDescription;

+ (BOOL)supportsSecureCoding;
+ (id)policyWithAccessibilityDescription:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;

@end
