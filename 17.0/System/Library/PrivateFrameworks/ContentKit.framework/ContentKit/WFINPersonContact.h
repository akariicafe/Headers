@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)wfName;
- (id)initWithCoder:(id)a0;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;

@end
