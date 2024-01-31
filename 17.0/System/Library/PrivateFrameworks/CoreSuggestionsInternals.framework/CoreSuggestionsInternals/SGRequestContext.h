@class NSOperationQueue, SGServiceContext;

@interface SGRequestContext : NSObject

@property (readonly, nonatomic) NSOperationQueue *processingQueue;
@property (readonly, nonatomic) NSOperationQueue *storageQueue;
@property (readonly, nonatomic) SGServiceContext *serviceContext;
@property (readonly, nonatomic) int concurrencyBehavior;
@property (readonly, nonatomic) int backpressureHazard;
@property (readonly, nonatomic) int extractionMode;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceContext:(id)a0 concurrencyBehavior:(int)a1 backpressureHazard:(int)a2;
- (id)initWithServiceContext:(id)a0 concurrencyBehavior:(int)a1 backpressureHazard:(int)a2 extractionMode:(int)a3;

@end
