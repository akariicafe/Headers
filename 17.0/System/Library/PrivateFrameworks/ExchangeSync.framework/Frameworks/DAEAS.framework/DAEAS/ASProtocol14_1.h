@interface ASProtocol14_1 : ASProtocol14_0

- (id)protocolVersion;
- (BOOL)sendDeviceInfoOnProvision;
- (BOOL)sendFirstDayOfWeekInRecurrence;
- (unsigned char)shortProtocolVersion;
- (BOOL)supportsGALPhotos;
- (BOOL)useEventIdsInMeetingResponse;

@end
