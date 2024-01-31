@class NSString, NSDate;

@interface ATXWidgetDescriptorCacheMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) NSString *containerBundleId;
@property (readonly, nonatomic) BOOL hasHomeScreenWidgetFamiliesOnly;
@property (readonly, nonatomic) BOOL hasAccessoryWidgetFamiliesOnly;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInstallDate:(id)a0 containerBundleId:(id)a1 hasHomeScreenWidgetFamiliesOnly:(BOOL)a2 hasAccessoryWidgetFamiliesOnly:(BOOL)a3;
- (BOOL)isEqualToATXWidgetDescriptorCacheMetadata:(id)a0;

@end
