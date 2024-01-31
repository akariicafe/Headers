@class NSData, CKRecordID;

@interface HMDBackingStoreLogRecord : NSObject

@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) long long xactID;
@property (readonly, nonatomic) long long pushed;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long encoding;
@property (readonly, nonatomic) CKRecordID *root;

- (id)description;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;

@end
