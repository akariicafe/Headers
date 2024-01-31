@class NSUUID, NSArray, NSMeasurement, NSDictionary, GEOJunction, NSString;
@protocol GEOTransitArtworkDataSource;

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSArray *titles;
@property (readonly, nonatomic) NSArray *details;
@property (retain, nonatomic) NSArray *primaryStrings;
@property (retain, nonatomic) NSArray *secondaryStrings;
@property (nonatomic) double remainingDistance;
@property (retain, nonatomic) NSMeasurement *displayRemainingDistance;
@property (readonly, nonatomic) NSDictionary *variableOverrides;
@property (readonly, nonatomic) long long distanceDetailLevel;
@property (readonly, nonatomic) GEOJunction *junction;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkOverride;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) int shieldID;
@property (readonly, nonatomic) NSString *shieldStringID;
@property (readonly, nonatomic) int composedGuidanceEventIndex;
@property (nonatomic) BOOL isStaticText;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 titles:(id)a1 details:(id)a2 variableOverrides:(id)a3 distanceDetailLevel:(int)a4 junction:(id)a5 artworkOverride:(id)a6 shieldText:(id)a7 shieldID:(int)a8 shieldStringID:(id)a9 composedGuidanceEventIndex:(int)a10;

@end
