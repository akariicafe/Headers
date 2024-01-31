@class NSString, NSNumber;

@interface ICASFullErrorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *fullErrorCode;
@property (readonly, nonatomic) NSString *errorString;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFullErrorCode:(id)a0 errorString:(id)a1;

@end
