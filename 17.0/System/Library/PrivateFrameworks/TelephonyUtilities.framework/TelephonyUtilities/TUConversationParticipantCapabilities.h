@interface TUConversationParticipantCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable;
@property (nonatomic, getter=isPersonaAvailable) BOOL personaAvailable;
@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable;
@property (nonatomic, getter=isUPlusNDowngradeAvailable) BOOL uPlusNDowngradeAvailable;
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) BOOL uPlusOneScreenShareAvailable;
@property (nonatomic, getter=isUPlusOneAVLessAvailable) BOOL uPlusOneAVLessAvailable;
@property (nonatomic) BOOL supportsLeaveContext;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;
@property (nonatomic) unsigned long long visionFeatureVersion;
@property (nonatomic) unsigned long long visionCallEstablishmentVersion;
@property (readonly, nonatomic, getter=isMirageAvailable) BOOL mirageAvailable;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToCapabilities:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
