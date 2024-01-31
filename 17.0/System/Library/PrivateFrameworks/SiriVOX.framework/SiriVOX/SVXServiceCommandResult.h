@class NSString, AceObject, NSArray;
@protocol SAAceCommand;

@interface SVXServiceCommandResult : NSObject <NSCopying> {
    long long _type;
    long long _failureErrorCode;
    NSString *_failureReason;
    AceObject<SAAceCommand> *_command;
    NSArray *_results;
}

+ (id)resultIgnored;
+ (id)resultFailureWithErrorCode:(long long)a0 reason:(id)a1;
+ (id)resultSuccess;
+ (id)resultWithCommand:(id)a0;
+ (id)resultWithResults:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithType:(long long)a0 failureErrorCode:(long long)a1 failureReason:(id)a2 command:(id)a3 results:(id)a4;
- (id)_optimalResult;
- (BOOL)handleResultUsingIgnoredBlock:(id /* block */)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2 commandBlock:(id /* block */)a3;

@end
