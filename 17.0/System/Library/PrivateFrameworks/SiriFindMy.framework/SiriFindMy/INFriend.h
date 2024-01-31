@class NSNumber, INPerson;

@interface INFriend : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *sharesLocation;
@property (nonatomic, retain) NSNumber *followsMyLocation;
@property (nonatomic, retain) INPerson *person;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
