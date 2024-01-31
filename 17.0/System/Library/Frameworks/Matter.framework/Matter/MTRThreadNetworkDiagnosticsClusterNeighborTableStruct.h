@class NSNumber;

@interface MTRThreadNetworkDiagnosticsClusterNeighborTableStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *extAddress;
@property (copy, nonatomic) NSNumber *age;
@property (copy, nonatomic) NSNumber *rloc16;
@property (copy, nonatomic) NSNumber *linkFrameCounter;
@property (copy, nonatomic) NSNumber *mleFrameCounter;
@property (copy, nonatomic) NSNumber *lqi;
@property (copy, nonatomic) NSNumber *averageRssi;
@property (copy, nonatomic) NSNumber *lastRssi;
@property (copy, nonatomic) NSNumber *frameErrorRate;
@property (copy, nonatomic) NSNumber *messageErrorRate;
@property (copy, nonatomic) NSNumber *rxOnWhenIdle;
@property (copy, nonatomic) NSNumber *fullThreadDevice;
@property (copy, nonatomic) NSNumber *fullNetworkData;
@property (copy, nonatomic) NSNumber *isChild;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
