@class NSFileProviderKernelFileMaterializationInfo, NSFileProviderKernelPartialFolderMaterializationInfo;

@interface NSFileProviderKernelMaterializationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int operation;
@property (readonly) NSFileProviderKernelFileMaterializationInfo *fileMaterializationInfo;
@property (readonly) NSFileProviderKernelPartialFolderMaterializationInfo *partialFolderMaterializationInfo;

+ (id)fileMaterializationInfoWithOperation:(unsigned int)a0 size:(long long)a1 offset:(long long)a2;
+ (id)kernelMaterializationInfoWithOperation:(unsigned int)a0;
+ (id)partialFolderMaterializationInfoWithOperation:(unsigned int)a0 fileName:(const char *)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
