@class CRKASMCourseUpdateProperties;
@protocol CRKASMLocation;

@interface CRKASMCourseCreateProperties : NSObject <NSCopying>

@property (retain, nonatomic) id<CRKASMLocation> location;
@property (copy, nonatomic) CRKASMCourseUpdateProperties *updateProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)areFulfilledByCourse:(id)a0;

@end
