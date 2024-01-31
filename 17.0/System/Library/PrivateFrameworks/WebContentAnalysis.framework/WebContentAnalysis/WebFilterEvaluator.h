@class WFRemotePINEntryViewController, NSString, NSURL, NSMutableData;

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding> {
    unsigned long long _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
    id /* block */ _completion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFRemotePINEntryViewController *remoteViewController;
@property (nonatomic) struct { unsigned int val[8]; } browserAuditToken;

+ (BOOL)isManagedSession;
+ (id)createWithResponse:(id)a0;
+ (id)sharedBloomFilter;

- (id)initWithResponse:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)addData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataComplete;
- (int)filterState;
- (void)unblockWithCompletion:(id /* block */)a0;
- (void)userDidCancel;
- (void)attemptUnblockWithCompletion:(id /* block */)a0;
- (id)blockPageForPageWithTitle:(id)a0 origURL:(id)a1;
- (id)debugPageForPageWithData:(id)a0 forURL:(id)a1 debugString:(id)a2;
- (void)userEnteredCorrectPIN;
- (BOOL)wasBlocked;

@end
