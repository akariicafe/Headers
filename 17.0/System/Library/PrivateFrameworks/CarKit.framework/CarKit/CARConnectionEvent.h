@class NSString, NSDictionary, NSUUID, NSDate;

@interface CARConnectionEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *transportType;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long eventType;

+ (id)eventWithName:(id)a0 type:(long long)a1 date:(id)a2 payload:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventName:(id)a0 type:(long long)a1 date:(id)a2 payload:(id)a3;

@end
