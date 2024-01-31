@class NSString;

@interface ICASSnapshotHealthPrivateUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *snapshotHealthPrivateUserID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSnapshotHealthPrivateUserID:(id)a0;

@end
