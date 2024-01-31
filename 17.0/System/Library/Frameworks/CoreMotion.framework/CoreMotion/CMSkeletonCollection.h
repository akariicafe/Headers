@class NSArray;

@interface CMSkeletonCollection : NSObject

@property (nonatomic) double localMachtime;
@property (nonatomic) double globalMachtime;
@property (retain, nonatomic) NSArray *skeleton2D;
@property (retain, nonatomic) NSArray *skeleton3DLifted;
@property (retain, nonatomic) NSArray *skeleton3DRetargeted;

@end
