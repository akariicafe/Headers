@interface _BlastDoorLPImageAttachmentSubstitute : _BlastDoorLPImage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldEncodeData;

@end
