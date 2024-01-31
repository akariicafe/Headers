@class NSDictionary, NSString;

@interface PHMemoryPresentationHints : NSObject <PHCollectionPresentationHints>

@property (readonly, nonatomic) unsigned long long socialRelationships;
@property (readonly, nonatomic) long long tripType;
@property (readonly, nonatomic) long long qualityCategory;
@property (readonly, nonatomic) unsigned long long recommendedMoods;
@property (readonly, nonatomic) unsigned long long forbiddenMoods;
@property (readonly, nonatomic) NSDictionary *musicGenreDistribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)socialRelationshipsFromMemory:(id)a0;
+ (long long)tripTypeFromMemory:(id)a0;

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0;

@end
