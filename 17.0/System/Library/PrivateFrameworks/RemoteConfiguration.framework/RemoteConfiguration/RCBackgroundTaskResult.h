@class NSString, NSDictionary, NSError;

@interface RCBackgroundTaskResult : NSObject

@property (retain, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) NSDictionary *configurationResourcesByRequestKey;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)a0 configurationResourcesByRequestKey:(id)a1 error:(id)a2;

@end
