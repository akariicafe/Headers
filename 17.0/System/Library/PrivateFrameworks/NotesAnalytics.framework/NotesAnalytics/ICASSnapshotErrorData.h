@class NSString, NSNumber;

@interface ICASSnapshotErrorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithErrorDomain:(id)a0 errorCode:(id)a1;

@end
