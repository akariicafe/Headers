@class NSString, NSDate;

@interface BMDeviceCellularAvailabilityStatus : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timeStamp;
    double _raw_timeStamp;
}

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
- (BOOL)isEqual:(id)a0;
- (id)initWithTimeStamp:(id)a0 deviceType:(int)a1 deviceRegistrationStatus:(int)a2;
- (id)initWithTimeStamp:(id)a0 deviceType:(int)a1 deviceRegistrationStatus:(int)a2 previousDeviceRegistrationStatus:(int)a3;

@end
