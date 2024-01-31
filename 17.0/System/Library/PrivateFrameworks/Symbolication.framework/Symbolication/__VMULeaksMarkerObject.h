@interface __VMULeaksMarkerObject : NSObject

@property (nonatomic) struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; } *region;
@property (nonatomic) unsigned int entryIndex;

- (void)dealloc;

@end
