@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) REFeatureMap *featureMap;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 featureMap:(id)a1;

@end
