@class NSString, NSDictionary;

@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *rapportID;
@property (retain, nonatomic) NSString *idsID;
@property (retain, nonatomic) NSString *homeKitID;
@property (retain, nonatomic) NSString *homeKitUserID;
@property (nonatomic) BOOL isAccessory;
@property (nonatomic) BOOL isEndpoint;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearIdentifiers;
- (id)initWithSender:(id)a0;
- (id)messageForCompanion;

@end
