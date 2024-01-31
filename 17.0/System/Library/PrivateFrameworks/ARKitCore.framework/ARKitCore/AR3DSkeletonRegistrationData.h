@class NSString;

@interface AR3DSkeletonRegistrationData : NSObject <ARResultData, NSCopying>

@property (nonatomic) double timestamp;
@property (nonatomic) float estimatedScaleFactor;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
