@class NSString;

@interface MSBaseSetupEvent : NSObject

@property (retain, nonatomic) NSString *eventName;

- (id)init;
- (id)encoded;
- (void).cxx_destruct;

@end
