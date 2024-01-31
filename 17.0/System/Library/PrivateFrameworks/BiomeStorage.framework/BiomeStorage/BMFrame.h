@class NSString, NSData;

@interface BMFrame : NSObject

@property (readonly, nonatomic) void *framePtr;
@property (readonly, nonatomic) union { struct { union { struct { unsigned int size; unsigned int state; } frameStatus; unsigned long long frameStatusData; } ; struct { double creationTimestamp; double modifiedTimestamp; unsigned int checksum; unsigned int dataVersion; } otherInfo; } frameHeaderV1; struct { unsigned int checksum; unsigned int dataVersion; } frameHeaderV2; } frameHeader;
@property (readonly, nonatomic) NSString *storePath;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long nextOffset;
@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) double modifiedTimestamp;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) unsigned long long datastoreVersion;

- (id)initWithHeader:(union { struct { union { struct { unsigned int x0; unsigned int x1; } x0; unsigned long long x1; } x0; struct { double x0; double x1; unsigned int x2; unsigned int x3; } x1; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 storePath:(id)a1 data:(id)a2 framePtr:(void *)a3 offset:(unsigned long long)a4 nextOffset:(unsigned long long)a5 timestamp:(double)a6 datastoreVersion:(unsigned long long)a7 state:(unsigned int)a8;
- (void).cxx_destruct;

@end
