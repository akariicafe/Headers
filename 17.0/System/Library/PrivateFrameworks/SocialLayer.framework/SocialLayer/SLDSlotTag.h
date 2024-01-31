@interface SLDSlotTag : UISSlotTag <NSCopying, NSCoding>

+ (unsigned long long)cacheLimit;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (unsigned long long)failGradeForStyle:(id)a0;

@end
