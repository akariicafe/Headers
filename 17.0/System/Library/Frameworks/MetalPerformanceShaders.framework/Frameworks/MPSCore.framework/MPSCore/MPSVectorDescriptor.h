@interface MPSVectorDescriptor : NSObject

@property (nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long vectors;
@property (nonatomic) unsigned int dataType;
@property (readonly, nonatomic) unsigned long long vectorBytes;

+ (id)vectorDescriptorWithLength:(unsigned long long)a0 dataType:(unsigned int)a1;
+ (id)vectorDescriptorWithLength:(unsigned long long)a0 vectors:(unsigned long long)a1 vectorBytes:(unsigned long long)a2 dataType:(unsigned int)a3;
+ (unsigned long long)vectorBytesForLength:(unsigned long long)a0 dataType:(unsigned int)a1;

- (id)init;

@end
