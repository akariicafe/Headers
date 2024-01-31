@class NSString, NSURL, NSData, NSDate;

@interface PKCloudStoreZoneInvitation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) NSData *shareInvitationToken;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *dateCreated;

+ (id)cloudStoreZoneInvitationWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCloudStoreZoneInvitation:(id)a0;

@end
