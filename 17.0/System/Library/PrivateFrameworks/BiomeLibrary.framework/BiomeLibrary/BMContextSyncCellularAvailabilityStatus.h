@class NSString, NSDate;

@interface BMContextSyncCellularAvailabilityStatus : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timeStamp;
    double _raw_timeStamp;
}

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *deviceUUID;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int deviceRegistrationStatus;
@property (readonly, nonatomic) int previousDeviceRegistrationStatus;
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
- (id)initWithID:(id)a0 deviceUUID:(id)a1 timeStamp:(id)a2 deviceType:(int)a3 deviceRegistrationStatus:(int)a4 previousDeviceRegistrationStatus:(int)a5;

@end
