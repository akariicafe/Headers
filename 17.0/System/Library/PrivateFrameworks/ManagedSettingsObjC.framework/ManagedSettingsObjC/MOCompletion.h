@class NSError;

@interface MOCompletion : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

+ (id)success;
+ (id)failureWithError:(id)a0;

- (id)initWithState:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
