@class NSSet;
@protocol HMIHomePersonManagerDataSource;

@interface HMIRemoveFaceCropsOperation : HMFOperation

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) NSSet *faceCropUUIDs;

+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 faceCropUUIDs:(id)a1;
- (void)mainInsideAutoreleasePool;

@end
