@interface SMEmergencyContactsNotifiedSyncMessage : SMMessage

@property (readonly, nonatomic) unsigned long long triggerCategory;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithSessionID:(id)a0 triggerCategory:(unsigned long long)a1;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 triggerCategory:(unsigned long long)a3;

@end
