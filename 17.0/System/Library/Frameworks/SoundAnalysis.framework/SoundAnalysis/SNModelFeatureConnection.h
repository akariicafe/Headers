@class NSString;

@interface SNModelFeatureConnection : NSObject <NSCopying> {
    NSString *_sourceFeatureName;
    NSString *_destinationFeatureName;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
