@class NSURL, NSString;

@interface BLHLSKey : NSObject

@property (readonly, nonatomic) long long method;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *keyFormat;
@property (readonly, nonatomic) NSString *keyFormatVersions;
@property (readonly, nonatomic) NSString *iv;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setPropertiesFromAttributeList:(id)a0;
- (BOOL)isEqualToHLSKey:(id)a0;
- (BOOL)isFormatSupported;

@end
