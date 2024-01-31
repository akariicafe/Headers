@class NSObject;
@protocol OS_dispatch_queue;

@interface WFFinderImageResizer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)resizeImages:(id)a0 toSize:(id)a1 completion:(id /* block */)a2;
- (void)computeResizedSizesForImages:(id)a0 inSizes:(id)a1 completion:(id /* block */)a2;
- (BOOL)unsafeComputeResizedSizesForImageContentItems:(id)a0 inSizes:(id)a1 intoSizesTable:(id)a2 error:(id *)a3;

@end
