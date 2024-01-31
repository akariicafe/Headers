@class NSString;

@interface ICASInternalUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *rawUserDSID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithRawUserDSID:(id)a0;

@end
