@class NSString;
@protocol MTLBuffer;

@interface MTLToolsIOScratchBuffer : MTLToolsObject <MTLIOScratchBuffer>

@property (readonly) id<MTLBuffer> buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;

@end
