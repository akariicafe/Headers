@class NSObject;
@protocol OS_dispatch_queue;

@interface CSNDEObjectFactory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void **)createNDEObject:(id)a0;
- (void)destoryNDEObject:(void **)a0;

@end
