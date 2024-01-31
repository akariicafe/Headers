@protocol VKCustomTileOverlayProviderDelegate;

@interface VKCustomTileOverlayProviderData : NSObject {
    long long _desiredDisplayRate;
    double _alpha;
}

@property (weak, nonatomic) id<VKCustomTileOverlayProviderDelegate> delegate;
@property (readonly, nonatomic) unsigned int providerID;
@property (readonly, nonatomic) unsigned int tileSize;
@property (readonly, nonatomic) unsigned int minimumZ;
@property (readonly, nonatomic) unsigned int maximumZ;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned long long desiredDisplayRate;

- (void).cxx_destruct;
- (id)initWithProviderID:(unsigned int)a0 tileSize:(unsigned int)a1 minimumZ:(unsigned int)a2 maximumZ:(unsigned int)a3;

@end
