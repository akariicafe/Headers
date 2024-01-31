@interface EKUIApplicationExtensionOverrides : NSObject

+ (id)shared;

- (id)init;
- (long long)layoutDirectionOrOverride;
- (id)preferredContentSizeCategoryOrOverride;
- (void)setLayoutDirectionOverride:(long long)a0;
- (void)setPreferredContentSizeCategoryOverride:(id)a0;
- (void)setViewHierarchyOverride:(id)a0;
- (id)viewHierarchyOrOverride;

@end
