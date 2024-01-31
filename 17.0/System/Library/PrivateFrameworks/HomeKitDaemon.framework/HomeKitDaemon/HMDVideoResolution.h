@class NSNumber;

@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *imageWidth;
@property (readonly, copy, nonatomic) NSNumber *imageHeight;
@property (readonly, nonatomic) unsigned long long resolutionType;

+ (id)arrayWithResolutions:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithTLVData:(id)a0;
- (void)_extractWidthAndHeight;
- (id)initWithResolution:(unsigned long long)a0;

@end
