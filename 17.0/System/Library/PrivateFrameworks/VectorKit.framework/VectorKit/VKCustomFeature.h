@class NSString, GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource, VKCustomImageProvider;

@interface VKCustomFeature : NSObject <NSSecureCoding> {
    struct shared_ptr<md::LabelExternalFeature> { struct LabelExternalFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _feature;
    id<VKCustomFeatureDataSource> _dataSource;
    id<VKCustomImageProvider> _imageProvider;
    NSString *_imageKey;
    BOOL _isGlobalFeature;
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; GEOFeatureStyleAttributes *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _featureStyleAttributesPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void *)feature;
- (void)setFeatureID:(unsigned long long)a0;
- (void)setClientFeatureID:(unsigned long long)a0;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (void)setMaxZoom:(float)a0;
- (id)styleAttributes;
- (unsigned long long)venueComponentID;
- (void)setSortKey:(int)a0;
- (id)init;
- (id)_initInternalFeatureWithCoordinate:(struct { double x0; double x1; double x2; })a0;
- (BOOL)isLineFeature;
- (void)setStyleAttributes:(id)a0;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x0; double x1; })a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 isRound:(BOOL)a2;
- (unsigned long long)businessID;
- (unsigned long long)clientFeatureID;
- (unsigned long long)venueBuildingID;
- (void *)lineFeature;
- (BOOL)isGlobalFeature;
- (void)encodeWithCoder:(id)a0;
- (void)setMinZoom:(float)a0;
- (unsigned char)clusteringMode;
- (id)imageProvider;
- (unsigned long long)featureID;
- (id)_initWithCoordinate:(struct { double x0; double x1; double x2; })a0 isInjected:(BOOL)a1;
- (id).cxx_construct;
- (void)setVenueID:(unsigned long long)a0;
- (void)setTextDisplayMode:(unsigned char)a0;
- (void)setBuildingFaceAzimuth:(float)a0;
- (void)setBuildingHeight:(float)a0;
- (void)setBusinessID:(unsigned long long)a0;
- (void)setFeatureRegion:(id)a0;
- (unsigned long long)venueID;
- (void *)pointFeature;
- (void).cxx_destruct;
- (BOOL)isPointFeature;
- (id)customImageKey;
- (void)setAnnotationText:(id)a0 locale:(id)a1;
- (void)setImageProvider:(id)a0 withKey:(id)a1;
- (BOOL)isInjectedFeature;
- (void)setDataSource:(id)a0;
- (void)setClusteringMode:(unsigned char)a0;
- (void)setVenueLevelID:(unsigned long long)a0;
- (void)setVenueComponentID:(unsigned long long)a0;
- (short)venueFloorOrdinal;
- (unsigned long long)venueLevelID;
- (void)setVenueFloorOrdinal:(short)a0;
- (void)setText:(id)a0 locale:(id)a1;
- (id)initLineWithCoordinates:(const struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (id)initWithCoordinate3D:(struct { double x0; double x1; double x2; })a0;
- (void)setElevationOffset:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)dataSource;
- (void)setVenueBuildingID:(unsigned long long)a0;

@end
