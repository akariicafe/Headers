@interface HFMotionAlarmStatusItem : HFAbstractPresenceStatusItem

+ (id)serviceTypes;

- (id)descriptionStringForTriggeredServices:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;
- (id)multipleReadyFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;
- (id)oneReadyFormatString;
- (id)oneTriggeredFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)titleStringForTriggeredServices:(id)a0;

@end
