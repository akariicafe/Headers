@class NSString;

@interface CRXUSystemInfo : NSObject

@property (readonly, nonatomic) NSString *modelName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
