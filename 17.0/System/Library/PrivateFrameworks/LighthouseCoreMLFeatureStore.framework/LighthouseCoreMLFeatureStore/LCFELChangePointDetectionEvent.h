@class NSUUID, NSArray, LCFELBatchProviderInfo, NSError, NSNumber;

@interface LCFELChangePointDetectionEvent : NSObject

@property (readonly, nonatomic) NSUUID *contextId;
@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSError *analysisError;

- (void).cxx_destruct;
- (id)init:(id)a0 results:(id)a1 succeeded:(id)a2 analysisError:(id)a3;

@end
