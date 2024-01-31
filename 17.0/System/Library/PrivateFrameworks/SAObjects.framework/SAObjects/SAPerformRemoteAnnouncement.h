@class NSString, NSDate, NSNumber, SAStartLocalRequest;

@interface SAPerformRemoteAnnouncement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *announcementIdentifier;
@property (copy, nonatomic) NSNumber *announcementNotificationType;
@property (copy, nonatomic) NSNumber *announcementPlatform;
@property (copy, nonatomic) NSDate *announcementTimestamp;
@property (copy, nonatomic) NSNumber *announcementType;
@property (retain, nonatomic) SAStartLocalRequest *startLocalRequest;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
