@class VisionCoreNamedObjects, NSObject;
@protocol OS_dispatch_queue;

@interface VisionCoreE5RTExecutionContextConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) VisionCoreNamedObjects *boundInputObjects;
@property (copy, nonatomic) VisionCoreNamedObjects *boundOutputObjects;
@property (nonatomic) BOOL prewireInUseAllocations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
