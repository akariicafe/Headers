@class NSString, NSNumber;

@interface ICASUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *userStorefrontID;
@property (readonly, nonatomic) NSString *saltVersion;
@property (readonly, nonatomic) NSNumber *userStartMonth;
@property (readonly, nonatomic) NSNumber *userStartYear;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUserID:(id)a0 userStorefrontID:(id)a1 saltVersion:(id)a2 userStartMonth:(id)a3 userStartYear:(id)a4;

@end
