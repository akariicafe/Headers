@class NSString;

@interface WFRemoteExecutionErrorEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *destinationType;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorCode;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
