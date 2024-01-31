@class NSData;

@interface VUIndexPartition : NSManagedObject

@property (nonatomic, copy) NSData *centroid;
@property (nonatomic) int partition;
@property (nonatomic) short type;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
