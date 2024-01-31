@class NSString, NSUUID, DRPasteAnnouncementEndpoint;

@interface DRPasteAnnouncement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedAnnouncementText;
@property (readonly, nonatomic) NSString *localizedAuthorizationText;
@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *source;
@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *destination;
@property (readonly, nonatomic) NSUUID *pasteboardUUID;
@property (readonly, nonatomic) double timeout;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_localizedTextRequiringAuthorization:(BOOL)a0;
- (BOOL)canCoalesceWithAnnouncement:(id)a0;
- (id)initWithSource:(id)a0 destination:(id)a1 pasteboardUUID:(id)a2 timeout:(double)a3;

@end
