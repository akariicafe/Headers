@class HMCRedirector;

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections;

- (id)init;
- (void).cxx_destruct;
- (BOOL)modelBelongsToThisPartition:(id)a0;

@end
