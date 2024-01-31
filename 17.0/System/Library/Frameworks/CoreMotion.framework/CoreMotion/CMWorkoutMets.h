@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject

@property (readonly, nonatomic) CMWorkoutMetsInternal *_internal;

+ (BOOL)isAvailable;

- (id)init;
- (void)dealloc;
- (void)queryWorkoutMetsWithSessionId:(id)a0 handler:(id /* block */)a1;

@end
