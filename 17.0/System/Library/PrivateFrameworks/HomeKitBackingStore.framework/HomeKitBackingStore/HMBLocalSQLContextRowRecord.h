@class NSUUID, NSString, NSData, NSNumber;

@interface HMBLocalSQLContextRowRecord : HMFObject

@property (readonly, nonatomic) unsigned long long recordRow;
@property (readonly, nonatomic) NSData *externalData;
@property (readonly, nonatomic) NSData *externalID;
@property (readonly, nonatomic) unsigned long long modelEncoding;
@property (readonly, nonatomic) NSUUID *modelID;
@property (readonly, nonatomic) NSData *modelData;
@property (readonly, nonatomic) NSUUID *modelSchema;
@property (readonly, nonatomic) NSString *modelType;
@property (readonly, nonatomic) unsigned long long pushEncoding;
@property (readonly, nonatomic) NSData *pushData;
@property (readonly, nonatomic) NSNumber *pushBlockRow;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 returning:(unsigned long long)a1;
- (id)initWithRecordRow:(unsigned long long)a0 externalID:(id)a1 externalData:(id)a2 modelID:(id)a3 modelEncoding:(unsigned long long)a4 modelData:(id)a5 modelSchema:(id)a6 modelType:(id)a7 pushEncoding:(unsigned long long)a8 pushData:(id)a9 pushBlockRow:(id)a10;

@end
