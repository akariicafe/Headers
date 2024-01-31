@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptor : NSObject <NSCopying>

@property (retain) id<MTLCounterSet> counterSet;
@property (copy) NSString *label;
@property unsigned long long storageMode;
@property unsigned long long sampleCount;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
