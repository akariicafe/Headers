@class NSString;

@interface CMSBaseContentFailureEvent : NSObject

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSString *sessionIdentifier;

- (id)encoded;
- (void).cxx_destruct;
- (id)initWithServiceID:(id)a0 sessionIdentifier:(id)a1;

@end
