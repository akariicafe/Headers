@class NSString;

@interface CRComponentAuth : NSObject

@property (copy, nonatomic) NSString *componentName;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_checkForComponentFailureInDefaults:(id)a0;
- (long long)convertIORegDataToStatus:(id)a0 authPass:(id)a1;
- (long long)copyComponentStatus;
- (id)initWithComponentName:(id)a0;
- (BOOL)isFirstAuthComplete;
- (long long)synchronouslycopyAuthStatus;

@end
