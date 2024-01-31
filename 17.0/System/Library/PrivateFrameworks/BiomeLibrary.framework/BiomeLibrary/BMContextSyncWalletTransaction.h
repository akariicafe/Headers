@class NSString;

@interface BMContextSyncWalletTransaction : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *deviceUUID;
@property (readonly, nonatomic) NSString *passUniqueID;
@property (readonly, nonatomic) NSString *passLocalizedDescription;
@property (readonly, nonatomic) int transactionType;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) int merchantType;
@property (readonly, nonatomic) NSString *poiCategory;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithID:(id)a0 deviceUUID:(id)a1 passUniqueID:(id)a2 passLocalizedDescription:(id)a3 transactionType:(int)a4 transactionID:(id)a5 merchantType:(int)a6 poiCategory:(id)a7;

@end
