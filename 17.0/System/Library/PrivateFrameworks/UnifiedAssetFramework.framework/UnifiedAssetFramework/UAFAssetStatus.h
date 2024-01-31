@class NSNumber, NSString;

@interface UAFAssetStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) unsigned long long missing;
@property (retain, nonatomic) NSString *siriLanguage;

+ (id)mockAssetStatus;
+ (id)stringFromUAFAssetState:(unsigned long long)a0;
+ (BOOL)dictationAvailableForLanguage:(id)a0;
+ (id)stringFromUAFAssetMissing:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
