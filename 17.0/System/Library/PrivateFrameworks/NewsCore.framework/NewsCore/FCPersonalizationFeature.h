@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying> {
    NSString *_personalizationIdentifier;
    NSString *_tagID;
}

@property (nonatomic) BOOL shouldBeBoosted;
@property (readonly, nonatomic) NSString *personalizationIdentifier;
@property (readonly, nonatomic) NSString *fc_description;
@property (readonly, nonatomic) NSString *tagID;

+ (id)featureObserver;
+ (id)featureForFreeValuedIdentifier:(id)a0;
+ (id)featureForIdentifier:(id)a0;
+ (id)featureFromTagID:(id)a0;
+ (id)featuresFromIssue:(id)a0;
+ (id)featuresFromPersonalizingItem:(id)a0 personalizationTreatment:(id)a1;
+ (id)featuresFromTag:(id)a0;
+ (id)featuresFromTagIDs:(id)a0;
+ (id)featuresFromTodayPersonalizationEvent:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
