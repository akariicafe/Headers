@class NSString, NSUUID, NSDate;

@interface RTDevice : NSObject <RTCoreDataReadable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithDeviceMO:(id)a0;

@end
