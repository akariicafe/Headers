@class NSDictionary, NSString;

@interface DYGPUToolsVersionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *infoPlist;
@property (copy, nonatomic) NSDictionary *versionPlist;
@property (nonatomic) unsigned int interposeVersionGL;
@property (nonatomic) unsigned int interposeVersionMetal;
@property (readonly, retain, nonatomic) NSString *version;
@property (readonly, retain, nonatomic) NSString *shortVersion;
@property (readonly, retain, nonatomic) NSString *sourceVersion;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)objectForInfoPlistKey:(id)a0;
- (id)objectForVersionPlistKey:(id)a0;

@end
