@class NSMutableDictionary;

@interface PKFeatureFailureCollection : NSObject <NSSecureCoding> {
    NSMutableDictionary *_failuresByFeature;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)errorForFeature:(unsigned long long)a0;

@end
