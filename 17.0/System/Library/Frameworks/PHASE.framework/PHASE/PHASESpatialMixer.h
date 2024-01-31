@class PHASESource, NSArray, PHASEListener;

@interface PHASESpatialMixer : PHASEMixer

@property (nonatomic) struct Handle64 { unsigned long long mData; } sourceDirectivityModel;
@property (nonatomic) struct Handle64 { unsigned long long mData; } listenerDirectivityModel;
@property (nonatomic) struct Handle64 { unsigned long long mData; } distanceModel;
@property (readonly, nonatomic) PHASESource *source;
@property (readonly, nonatomic) PHASEListener *listener;
@property (readonly, nonatomic) NSArray *spatialModelerSends;

+ (id)new;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 spatialModelerSends:(id)a1 source:(id)a2 listener:(id)a3 sourceDirectivityModel:(struct Handle64 { unsigned long long x0; })a4 listenerDirectivityModel:(struct Handle64 { unsigned long long x0; })a5 distanceModel:(struct Handle64 { unsigned long long x0; })a6;

@end
