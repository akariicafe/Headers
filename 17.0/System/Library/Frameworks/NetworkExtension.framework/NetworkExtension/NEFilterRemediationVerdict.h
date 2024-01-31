@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)needRulesVerdict;

- (long long)filterAction;

@end
