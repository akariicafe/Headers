@class NSString, ICASErrorStatus;

@interface ICASCloudErrorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASErrorStatus *errorStatus;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithErrorStatus:(id)a0;

@end
