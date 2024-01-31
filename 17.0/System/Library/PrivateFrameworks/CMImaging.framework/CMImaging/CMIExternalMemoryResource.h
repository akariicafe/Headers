@class FigMetalAllocatorBackend;

@interface CMIExternalMemoryResource : NSObject

@property (retain, nonatomic) FigMetalAllocatorBackend *allocatorBackend;

- (void).cxx_destruct;

@end
