@class NSLock, NSString;
@protocol AMSBagProtocol;

@interface AMSODISession : NSObject {
    NSString *_cacheIdentifier;
}

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) unsigned long long accountType;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *cacheIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;

+ (BOOL)provideFeedbackOnPayloadOutcome:(unsigned long long)a0 cacheIdentifier:(id)a1 bag:(id)a2;
+ (BOOL)shouldUseODIWithBag:(id)a0;

- (void)setCacheIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_createODISession;
- (id)getAssessment;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bag:(id)a2;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bundleIdentifier:(id)a2 bag:(id)a3;
- (BOOL)updateWithAttributes:(id)a0;

@end
