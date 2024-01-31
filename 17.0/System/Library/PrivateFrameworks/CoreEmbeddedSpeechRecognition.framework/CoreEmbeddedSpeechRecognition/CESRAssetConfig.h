@class NSString, SFEntitledAssetConfig;

@interface CESRAssetConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, nonatomic) SFEntitledAssetConfig *config;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0 task:(id)a1;
- (id)initWithSFEntitledAssetConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
