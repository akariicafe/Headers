@class NSSet, NSArray;

@interface AVMetadataObjectCollection : NSObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) NSSet *metadataObjectTypes;
@property (readonly) NSSet *handledMetadataObjectTypes;
@property (readonly) NSArray *metadataObjects;

+ (id)collectionWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 metadataObjectTypes:(id)a1 handledMetadataObjectTypes:(id)a2 metadataObjects:(id)a3;

- (void)dealloc;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 metadataObjectTypes:(id)a1 handledMetadataObjectTypes:(id)a2 metadataObjects:(id)a3;

@end
