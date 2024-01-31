@interface ASProtocol14_0 : ASProtocol12_1

- (id)protocolVersion;
- (BOOL)allAttachmentsAreBase64ed;
- (BOOL)alwaysSendTimezone;
- (BOOL)fetchAttachmentsWithItemOperations;
- (BOOL)processFullMeetingInvitationData;
- (BOOL)sendCalendarInfoInRecurrence;
- (BOOL)sendEmailInWBXML;
- (BOOL)sendUserAgentInDeviceInfo;
- (unsigned char)shortProtocolVersion;
- (BOOL)supportsAttendeesInExceptions;
- (BOOL)useSmartMailTasks;
- (BOOL)usesTopLevelStatusCodes;

@end
