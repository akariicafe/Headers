@class NSString, SHRange;

@interface SHCatalogConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *installationID;
@property (retain, nonatomic) SHRange *signatureDurationRange;
@property (nonatomic) double streamingBufferDuration;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
