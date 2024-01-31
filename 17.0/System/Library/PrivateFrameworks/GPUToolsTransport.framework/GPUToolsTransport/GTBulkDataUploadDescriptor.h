@interface GTBulkDataUploadDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sizeHint;
@property (nonatomic) long long compressionAlgorithm;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
