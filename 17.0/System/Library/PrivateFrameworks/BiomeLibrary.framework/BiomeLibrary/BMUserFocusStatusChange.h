@class NSString, NSArray;

@interface BMUserFocusStatusChange : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) NSString *statusChangeType;
@property (readonly, nonatomic) NSArray *idsHandles;
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
- (id)_idsHandlesJSONArray;
- (id)initWithIdsHandle:(id)a0 statusChangeType:(id)a1 idsHandles:(id)a2;

@end
