@interface CMIExternalMemoryDescriptor : NSObject

@property (nonatomic) unsigned long long memSize;
@property (nonatomic) int allocatorType;

- (id)initWithMemSize:(unsigned long long)a0 allocatorType:(int)a1;

@end
