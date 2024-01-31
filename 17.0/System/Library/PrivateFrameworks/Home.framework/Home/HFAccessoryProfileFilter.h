@interface HFAccessoryProfileFilter : NSObject

+ (BOOL)_shouldIncludeObject:(id)a0 passingNullableFilterSet:(id)a1;
+ (BOOL)_shouldIncludeObjectPassingFilter:(BOOL)a0 shouldApplyFilter:(BOOL)a1;
+ (id)filterProfiles:(id)a0 options:(id)a1;

@end
