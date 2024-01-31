@interface UISSlotTag : NSObject <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (unsigned long long)cacheLimit;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (float)backgroundStatisticsFailingContrastForStyle:(id)a0;
- (float)backgroundStatisticsForegroundForStyle:(id)a0;
- (float)backgroundStatisticsPassingContrastForStyle:(id)a0;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })backgroundStatisticsRegionForStyle:(id)a0;
- (unsigned long long)failGradeForStyle:(id)a0;
- (long long)initialSampleEventForStyle:(id)a0;
- (unsigned int)secureNameForStyle:(id)a0;

@end
