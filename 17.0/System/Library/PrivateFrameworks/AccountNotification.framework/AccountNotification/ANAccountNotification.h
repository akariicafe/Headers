@class NSString, NSDictionary, ANNotificationAction, NSDate;

@interface ANAccountNotification : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *callbackMachService;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *accountTypeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *activateButtonTitle;
@property (retain, nonatomic) ANNotificationAction *activateAction;
@property (retain, nonatomic) ANNotificationAction *dismissAction;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *eventIdentifier;
@property (nonatomic) long long destinations;
@property (nonatomic) long long sectionSubtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManagedObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initForAccountWithType:(id)a0;

@end
