@class NSString, INPerson;

@interface MSGetMailIntent : INIntent

@property (nonatomic) long long readStatus;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) INPerson *recipient;
@property (copy, nonatomic) NSString *subject;

@end
