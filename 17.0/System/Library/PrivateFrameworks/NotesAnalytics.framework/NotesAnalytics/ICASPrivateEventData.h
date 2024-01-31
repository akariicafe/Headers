@class NSString, ICASSessionDetailType;

@interface ICASPrivateEventData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *privateSessionID;
@property (readonly, nonatomic) ICASSessionDetailType *sessionDetailType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPrivateSessionID:(id)a0 sessionDetailType:(id)a1;

@end
