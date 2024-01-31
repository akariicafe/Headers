@class NSString;

@interface ICASUserSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *userStorefrontID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUserID:(id)a0 userStorefrontID:(id)a1;

@end
