@class NSString, MTLStructType, MTLPointerType;

@interface URMTLArgument : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long access;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long bufferAlignment;
@property (nonatomic) unsigned long long bufferDataSize;
@property (nonatomic) unsigned long long bufferDataType;
@property (retain, nonatomic) MTLStructType *bufferStructType;
@property (retain, nonatomic) MTLPointerType *bufferPointerType;
@property (nonatomic) unsigned long long threadgroupMemoryAlignment;
@property (nonatomic) unsigned long long threadgroupMemoryDataSize;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long textureDataType;
@property (nonatomic) BOOL isDepthTexture;
@property (nonatomic) unsigned long long arrayLength;

- (id)init;
- (void).cxx_destruct;

@end
