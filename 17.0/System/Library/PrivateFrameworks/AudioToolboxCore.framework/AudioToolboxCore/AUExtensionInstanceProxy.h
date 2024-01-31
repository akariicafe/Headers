@interface AUExtensionInstanceProxy : NSObject

@property (nonatomic) void *auInstance;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
