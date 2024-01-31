@class NSUUID, NSDate;

@interface HMDCameraSignificantEventNotificationRecord : HMFObject <NSCopying>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long notificationReasons;
@property (readonly, copy) NSDate *date;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 notificationReasons:(unsigned long long)a1 date:(id)a2;

@end
