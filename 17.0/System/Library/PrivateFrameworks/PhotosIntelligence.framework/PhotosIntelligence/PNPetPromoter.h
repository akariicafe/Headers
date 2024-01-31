@class NSDictionary;

@interface PNPetPromoter : NSObject {
    void /* unknown type, empty encoding */ metrics;
}

@property (class, nonatomic, readonly) long long kPNPetPromoterVerifiedPetMinimumNumberOfFaces;
@property (class, nonatomic, readonly) long long kPNPetPromoterVerifiedPetMinimumNumberOfMoments;
@property (class, nonatomic, readonly) long long kPNPetPromoterVerifiedPetMinimumNumberOfAssetsAlone;
@property (class, nonatomic, readonly) long long kPNPetPromoterMaximumNumberOfPetsInPeopleHome;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ photoLibrary;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSDictionary *metrics;

+ (void)promoteUnverifiedPetsInPhotoLibrary:(id)a0 withUpdateBlock:(id /* block */)a1;
+ (id)statusWithPhotoLibrary:(id)a0 delegate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 andDelegate:(id)a1;
- (void)incrementMetricForKey:(id)a0 withValue:(unsigned long long)a1;
- (void)promoteUnverifiedPetsWithUpdateBlock:(id /* block */)a0;

@end
