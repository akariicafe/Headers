@class NSArray, NSDictionary, NSString;

@interface _ANEAnalyticsProcedure : NSObject

@property (readonly, nonatomic) NSArray *groupInfo;
@property (readonly, nonatomic) NSDictionary *procedureMetrics;
@property (readonly, nonatomic) NSString *identifier;

+ (id)objectWithGroups:(id)a0 procedureMetrics:(id)a1 indentifier:(id)a2;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithGroups:(id)a0 procedureMetrics:(id)a1 indentifier:(id)a2;

@end
