@class NSString, NSURL, NSError, AMSPromise;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (copy) NSURL *privacyPolicyURL;
@property (copy) NSError *error;
@property (retain) AMSPromise *outstandingPromise;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (id)init;
- (void)start;
- (BOOL)isAsynchronous;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)cancel;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_performLookup;

@end
