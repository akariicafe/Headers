@class NSString, NSNumber;

@interface ICASPrivateUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *privateUserID;
@property (readonly, nonatomic) NSString *saltVersion;
@property (readonly, nonatomic) NSNumber *userStartMonth;
@property (readonly, nonatomic) NSNumber *userStartYear;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPrivateUserID:(id)a0 saltVersion:(id)a1 userStartMonth:(id)a2 userStartYear:(id)a3;

@end
