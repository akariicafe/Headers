@class NSUUID, NSString, NSURL, NSData, NSDate, NSError, MSMessageLayout, MSSession;

@interface MSMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *time;
@property (nonatomic, getter=isPending) BOOL pending;
@property (copy, nonatomic) NSData *_data;
@property (nonatomic) BOOL isFromMe;
@property (retain, nonatomic) NSUUID *senderParticipantIdentifier;
@property (retain, nonatomic) NSString *senderAddress;
@property (nonatomic) BOOL requiresValidation;
@property (copy, nonatomic) NSString *statusText;
@property (copy, nonatomic) NSString *breadcrumbText;
@property (readonly, nonatomic) MSSession *session;
@property (copy, nonatomic) MSMessageLayout *layout;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) BOOL shouldExpire;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *summaryText;
@property (copy, nonatomic) NSError *error;

- (id)initWithSession:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sanitizedCopy;
- (id)_pluginPayloadWithAppIconData:(id)a0 appName:(id)a1 allowDataPayloads:(BOOL)a2;
- (void)_mergeSanitizedDataFromMessage:(id)a0;
- (id)_pluginPayloadWithAppIconData:(id)a0 appName:(id)a1 adamID:(id)a2 allowDataPayloads:(BOOL)a3;
- (void)_mergeSanitizedKeepingModifiedMessage:(id)a0;
- (id)_payloadDataFromAppIconData:(id)a0 appName:(id)a1 adamID:(id)a2 allowDataPayloads:(BOOL)a3;
- (void)_sanitize;
- (id)_shallowCopy;

@end
