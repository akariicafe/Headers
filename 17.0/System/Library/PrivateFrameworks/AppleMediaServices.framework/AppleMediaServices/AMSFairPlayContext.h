@interface AMSFairPlayContext : NSObject

@property (nonatomic) unsigned int contextID;

- (id)init;
- (void)dealloc;
- (void)destroyContext;
- (unsigned int)fairplayContextIDWithError:(id *)a0;

@end
