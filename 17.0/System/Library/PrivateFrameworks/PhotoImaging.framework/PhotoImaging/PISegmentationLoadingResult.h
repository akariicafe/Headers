@class NSError;

@interface PISegmentationLoadingResult : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 success:(BOOL)a1 error:(id)a2;

@end
