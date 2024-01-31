@class NSArray, NSDictionary;

@interface BWPointCloudFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedDataFormats;
@property (nonatomic) unsigned long long maxPoints;
@property (nonatomic) unsigned long long dataBufferSize;
@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) BOOL memoryPoolUseAllowed;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (Class)formatClass;
- (id)description;
- (unsigned int)mediaType;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
