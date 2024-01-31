@class NSString;

@interface ICASSnapshotHealthPrivateDeviceData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *snapshotHealthPrivateDeviceID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSnapshotHealthPrivateDeviceID:(id)a0;

@end
