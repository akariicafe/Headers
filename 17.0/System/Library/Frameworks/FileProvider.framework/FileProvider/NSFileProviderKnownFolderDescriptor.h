@class NSURL;

@interface NSFileProviderKnownFolderDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *knownFolder;
@property (readonly, nonatomic) NSURL *logicalLocation;
@property (readonly, nonatomic) unsigned long long detachOptions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKnownFolder:(id)a0 logicalLocation:(id)a1;
- (id)initWithKnownFolder:(id)a0 logicalLocation:(id)a1 detachOptions:(unsigned long long)a2;

@end
