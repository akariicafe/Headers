@class NSURLSession, NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue, OS_os_transaction;

@interface FigNSURLSession : NSObject {
    NSURLSessionConfiguration *_configuration;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakAssertion;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) id<NSURLSessionDataDelegate> dataDelegate;
@property (readonly, nonatomic) NSOperationQueue *opQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) NSString *clientPersonaIdentifier;
@property (nonatomic) long long doomTime;
@property (nonatomic) int deferReleaseSeconds;
@property (nonatomic) BOOL doomCheckScheduled;
@property (nonatomic) int assertionCount;

- (void)dealloc;
- (void)debug;
- (id)initWithClientBundleIdentifier:(id)a0 clientPersonaIdentifier:(id)a1 dispatchQueue:(id)a2;
- (unsigned char)acquireOSTransaction;
- (struct FigOpaqueAssertion { } *)acquireAssertion;
- (void)releaseOSTransaction;

@end
