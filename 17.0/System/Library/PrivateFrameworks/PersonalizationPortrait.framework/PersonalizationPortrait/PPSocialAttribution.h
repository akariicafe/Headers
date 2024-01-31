@class NSString, NSArray, NSURL, NSDate, NSData, PPSocialPerson;

@interface PPSocialAttribution : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sourceAppDisplayName;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) NSURL *groupPhotoPath;
@property (readonly, nonatomic) NSString *groupDisplayName;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly, nonatomic) NSArray *relatedPeople;
@property (readonly, nonatomic) PPSocialPerson *sender;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSData *collaborationMetadata;
@property (readonly, nonatomic, getter=isStarred) BOOL starred;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 groupId:(id)a5 relatedPeople:(id)a6 sender:(id)a7 timestamp:(id)a8 collaborationMetadata:(id)a9 starred:(BOOL)a10 fromMe:(BOOL)a11;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7 collaborationMetadata:(id)a8 starred:(BOOL)a9 fromMe:(BOOL)a10;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7 starred:(BOOL)a8;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7 starred:(BOOL)a8 fromMe:(BOOL)a9;

@end
