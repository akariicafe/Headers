@class NSDictionary;

@interface DYGTGPUToolsVersionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *infoPlist;
@property (copy, nonatomic) NSDictionary *versionPlist;
@property (nonatomic) unsigned int interposeVersionGL;
@property (nonatomic) unsigned int interposeVersionMetal;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
