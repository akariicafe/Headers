@class NSString, NSNumber;

@interface _ANEAnalyticsLayer : NSObject

@property (readonly, nonatomic) NSString *layerName;
@property (readonly, nonatomic) NSNumber *weight;

+ (id)objectWithName:(id)a0 weight:(id)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 weight:(id)a1;

@end
