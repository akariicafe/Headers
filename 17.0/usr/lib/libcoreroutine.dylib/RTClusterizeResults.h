@class NSArray;

@interface RTClusterizeResults : NSObject

@property (retain, nonatomic) NSArray *clusters;
@property (retain, nonatomic) NSArray *objectIDs;

- (void).cxx_destruct;
- (id)initWithClusters:(id)a0 objectIDs:(id)a1;

@end
