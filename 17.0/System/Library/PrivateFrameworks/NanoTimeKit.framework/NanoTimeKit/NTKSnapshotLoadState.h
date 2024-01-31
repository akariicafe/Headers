@class UIImage, NSError;

@interface NTKSnapshotLoadState : NSObject

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSError *error;

+ (id)pending;
+ (id)failureWithError:(id)a0;
+ (id)loading;
+ (id)successWithImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithStatus:(unsigned long long)a0 image:(id)a1 error:(id)a2;

@end
