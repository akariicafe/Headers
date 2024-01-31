@class PGGraphMomentNodeCollection, PGGraphLocationCityNodeCollection, NSDateInterval, PGGraphLocationStateNodeCollection, PGGraphLocationNodeCollection;

@interface PGPastSupersetGroup : NSObject

@property (retain) PGGraphMomentNodeCollection *momentNodes;
@property (retain) NSDateInterval *dateInterval;
@property (retain) PGGraphLocationCityNodeCollection *supersetCityNodes;
@property (retain) PGGraphLocationNodeCollection *densestCloseLocationNodes;
@property (retain) PGGraphLocationStateNodeCollection *stateNodeAsCollection;

+ (id)pastSupersetGroupWithMomentNodes:(id)a0 dateInterval:(id)a1 supersetCityNodeAsCollection:(id)a2 densestCloseLocationNodeAsCollection:(id)a3 locationHelper:(id)a4;

- (void).cxx_destruct;

@end
