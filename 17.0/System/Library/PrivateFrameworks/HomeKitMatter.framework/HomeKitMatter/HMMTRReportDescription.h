@class NSNumber, NSArray, NSString;

@interface HMMTRReportDescription : HMFObject

@property (readonly) NSNumber *clusterId;
@property (readonly) NSArray *attributeIds;
@property (readonly) NSArray *eventIds;
@property (copy, nonatomic) id /* block */ mapValue;
@property (copy, nonatomic) id /* block */ mapEvent;
@property (retain, nonatomic) NSString *clusterClass;
@property (retain, nonatomic) NSString *clusterSelector;

- (void).cxx_destruct;
- (id)initWithClusterId:(id)a0 attributeIds:(id)a1 eventIds:(id)a2;

@end
