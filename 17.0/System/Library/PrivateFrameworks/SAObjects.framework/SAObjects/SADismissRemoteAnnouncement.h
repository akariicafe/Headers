@class NSString;

@interface SADismissRemoteAnnouncement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *announcementIdentifier;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
