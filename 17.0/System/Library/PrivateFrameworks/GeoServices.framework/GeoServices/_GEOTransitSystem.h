@class GEOStyleAttributes, NSString, GEOPBTransitSystem;
@protocol GEOTransitArtworkDataSource;

@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding> {
    GEOPBTransitSystem *_system;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
