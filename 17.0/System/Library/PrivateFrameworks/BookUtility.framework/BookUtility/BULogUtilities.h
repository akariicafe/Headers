@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface BULogUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) BOOL buVerboseLoggingEnabled;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSString *keyPath;

+ (id)shared;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)verboseLoggingEnabled;
- (void)observeDefaults;
- (id)initWithUserDefaults:(id)a0 keyPath:(id)a1;

@end
