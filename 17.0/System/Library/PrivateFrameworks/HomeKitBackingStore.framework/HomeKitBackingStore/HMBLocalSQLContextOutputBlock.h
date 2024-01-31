@class NSString, HMFActivity, HMBLocalSQLContext;

@interface HMBLocalSQLContextOutputBlock : HMFObject <HMFLogging>

@property (weak, nonatomic) HMBLocalSQLContext *owner;
@property (nonatomic) unsigned long long blockRow;
@property (readonly, nonatomic) unsigned long long zoneRow;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)abort;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)commit:(id)a0;
- (id)initWithOwner:(id)a0 identifier:(id)a1 zoneRow:(unsigned long long)a2 blockRow:(unsigned long long)a3;
- (id)updateModelID:(id)a0 modelEncoding:(unsigned long long)a1 modelData:(id)a2;

@end
