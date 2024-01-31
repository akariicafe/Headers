@class NSString, NSData, PKSharingMessageDisplayInformation;

@interface PKSharingMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long format;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) PKSharingMessageDisplayInformation *displayInformation;

+ (id)specializedMessageFromPayload:(id)a0 displayInformation:(id)a1 outError:(id *)a2;
+ (id)embeddedMessageDictionaryForShareURL:(id)a0 targetDevice:(long long)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)initWithCoder:(id)a0;
- (id)_initWithPayload:(id)a0 format:(unsigned long long)a1 type:(unsigned long long)a2 displayInformation:(id)a3;
- (void)addEmbeddedMessages:(id)a0;
- (BOOL)configureWithContent:(id)a0;
- (id)embeddedAddressForDeviceType:(long long)a0;
- (id)embeddedMessageURLs;
- (id)initWithContent:(id)a0 format:(unsigned long long)a1 type:(unsigned long long)a2 displayInformation:(id)a3;
- (void)updateMessageContentTo:(id)a0;

@end
