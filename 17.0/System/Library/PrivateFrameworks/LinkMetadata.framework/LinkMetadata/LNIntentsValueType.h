@class NSString;

@interface LNIntentsValueType : LNValueType

@property (class, readonly, nonatomic) LNIntentsValueType *applicationValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *calendarEventValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *currencyAmountValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *environmentValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *personValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *noteValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *notificationValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *timerValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *taskValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *taskListValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *mediaItemValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *mediaSearchValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *messageConversationValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *fileValueType;
@property (class, readonly, nonatomic) LNIntentsValueType *paymentMethodValueType;

@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;

+ (BOOL)supportsSecureCoding;
+ (id)supportedClassesByTypeIdentifier;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithTypeIdentifier:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
