@class NSString, NSArray, GEOMapItemIdentifier, GEOFeatureStyleAttributes;
@protocol GEOMapItemPhoto;

@interface GEOTrail : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) id<GEOMapItemPhoto> photo;
@property (readonly, nonatomic) NSArray *factoids;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned long long trailId;
@property (readonly, nonatomic) GEOMapItemIdentifier *trailIdentifier;
@property (readonly, nonatomic) BOOL shouldHighlight;

+ (id)factoidsFromFactoidData:(id)a0;

- (void).cxx_destruct;
- (id)initWithTrail:(id)a0;

@end
