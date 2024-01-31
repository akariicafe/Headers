@class NSString, ICASOperationType;

@interface ICASCloudOperationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) ICASOperationType *operationType;
@property (readonly, nonatomic) NSString *operationGroupName;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithOperationID:(id)a0 operationType:(id)a1 operationGroupName:(id)a2;

@end
