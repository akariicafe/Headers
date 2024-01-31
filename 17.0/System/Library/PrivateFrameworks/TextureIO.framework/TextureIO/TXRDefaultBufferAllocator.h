@class NSString;

@interface TXRDefaultBufferAllocator : NSObject <TXRBufferAllocator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newBufferWithLength:(unsigned long long)a0;

- (id)newBufferWithLength:(unsigned long long)a0;

@end
