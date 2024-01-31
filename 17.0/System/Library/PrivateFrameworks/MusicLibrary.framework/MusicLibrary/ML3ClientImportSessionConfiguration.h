@class NSString, ML3DatabasePrivacyContext;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *libraryPath;
@property (nonatomic) int sourceType;
@property (nonatomic) unsigned long long operationCount;
@property (nonatomic) BOOL allowAccountMerging;
@property (nonatomic) ML3DatabasePrivacyContext *privacyContext;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
