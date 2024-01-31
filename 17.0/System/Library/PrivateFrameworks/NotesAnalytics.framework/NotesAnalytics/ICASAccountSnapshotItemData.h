@class NSString, ICASAccountType, ICASAccountPurpose;

@interface ICASAccountSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) ICASAccountType *accountType;
@property (readonly, nonatomic) ICASAccountPurpose *accountPurpose;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAccountID:(id)a0 accountType:(id)a1 accountPurpose:(id)a2;

@end
