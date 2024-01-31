@class NSArray, NSString;

@interface HMAudioAnalysisAggregateEventBulletin : HMEEvent <HMFLogging, HMFObject>

@property (readonly, copy) NSArray *bulletins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)decodeBulletinsFromEvent:(id)a0 error:(id *)a1;
+ (id)topicWithAccessoryUUID:(id)a0 homeUUID:(id)a1;

- (id)encodedData;
- (void).cxx_destruct;
- (id)bulletinsByAddingOrReplacingBulletin:(id)a0;
- (BOOL)checkIfBulletinExists:(id)a0;
- (id)initWithBulletins:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end
