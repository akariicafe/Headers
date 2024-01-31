@class NSString;

@interface NMSKeepLocalRequestOptions : NSObject <NSCopying>

@property (nonatomic) BOOL requiresValidation;
@property (copy, nonatomic) NSString *cellularBundleIdentifier;
@property (nonatomic) unsigned long long powerPolicy;
@property (nonatomic) unsigned long long cellularPolicy;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)resolvedConstraints:(unsigned long long)a0;

@end
