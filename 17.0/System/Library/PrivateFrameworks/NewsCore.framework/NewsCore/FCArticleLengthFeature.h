@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)longLengthFeature;
+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;

- (id)init;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithLengthIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPersonalizationIdentifier:(id)a0;

@end
