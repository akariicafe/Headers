@class NSString;

@interface BLSHTailspinLogWriter : NSObject {
    NSString *_reason;
    id /* block */ _completion;
}

+ (BOOL)isTailspinAvailable;

- (id)initWithReason:(id)a0;
- (void)_finish:(BOOL)a0;
- (void).cxx_destruct;
- (void)writeTailspinLogWithCompletion:(id /* block */)a0;
- (id)_tailspinFilesDirectory;

@end
