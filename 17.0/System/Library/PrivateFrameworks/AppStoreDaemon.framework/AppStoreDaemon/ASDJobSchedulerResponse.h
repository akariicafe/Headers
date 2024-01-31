@class NSArray;

@interface ASDJobSchedulerResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *bucketNames;
@property (readonly) NSArray *currentItems;
@property (copy) NSArray *hardFailureItems;
@property (nonatomic) long long maxItemCount;
@property (copy) NSArray *nextItems;
@property (copy) NSArray *skippedItems;
@property (copy) NSArray *softFailureItems;

- (id)init;
- (id)initWithItems:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
