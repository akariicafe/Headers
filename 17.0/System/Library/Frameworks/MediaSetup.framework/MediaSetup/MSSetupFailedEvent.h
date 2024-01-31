@class NSString;

@interface MSSetupFailedEvent : MSBaseSetupEvent

@property (retain, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSString *errorName;

- (id)encoded;
- (void).cxx_destruct;
- (id)initWithErrorNamed:(id)a0;

@end
