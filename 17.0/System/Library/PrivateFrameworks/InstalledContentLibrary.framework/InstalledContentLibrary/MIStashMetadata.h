@class NSDate;

@interface MIStashMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *dateStashed;
@property (retain, nonatomic) NSDate *dateOriginallyInstalled;

+ (id)metadataFromURL:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
