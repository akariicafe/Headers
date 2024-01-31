@class NSString;

@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *fileName;

- (void)dealloc;
- (id)initWithFileName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
