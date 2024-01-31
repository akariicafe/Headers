@class NSNumber, NSArray;

@interface _ANEAnalyticsGroup : NSObject

@property (readonly, nonatomic) NSNumber *groupID;
@property (readonly, nonatomic) NSArray *layerInfo;
@property (readonly, nonatomic) NSArray *taskInfo;

+ (id)objectWithID:(id)a0 layers:(id)a1 tasks:(id)a2;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 layers:(id)a1 tasks:(id)a2;

@end
