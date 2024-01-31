@class NSString, NSNumber;

@interface ICASFastSyncErrorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSNumber *countOfIgnoredMessages;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithErrorCode:(id)a0 countOfIgnoredMessages:(id)a1;

@end
