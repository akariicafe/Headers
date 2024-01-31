@class NSObject;
@protocol OS_dispatch_queue;

@interface ICThumbnailGeneratorNote : ICThumbnailGenerator

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double margin;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)generateThumbnailImageWithNote:(id)a0 configuration:(id)a1;
- (void)generateThumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
