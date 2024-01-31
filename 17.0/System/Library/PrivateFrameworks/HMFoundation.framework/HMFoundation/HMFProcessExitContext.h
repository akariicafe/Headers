@class NSError, NSDate;

@interface HMFProcessExitContext : NSObject

@property (readonly, nonatomic) BOOL isStale;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL isCrash;
@property (readonly, nonatomic) long long crashReasonCode;
@property (readonly, nonatomic) BOOL isJetsam;
@property (readonly, nonatomic) long long jetsamReasonCode;
@property (readonly, nonatomic) NSError *errorRepresentation;
@property (readonly, nonatomic) long long OSReasonDomain;
@property (readonly, nonatomic) long long OSReasonCode;

+ (id)lastExitContext;
+ (BOOL)onceCompareAndSetTimestamp:(id)a0 toStoredValueWithKey:(id)a1 inStore:(id)a2;

- (void).cxx_destruct;
- (id)initWithRBSProcessExitContext:(id)a0 processName:(id)a1 userDefaultsStore:(id)a2 resetStoreReadToken:(BOOL)a3;
- (id)initWithUserDefaultsStore:(id)a0 processLastRecordedExitTimeKey:(id)a1 resetStoreReadToken:(BOOL)a2 timestamp:(id)a3 osReasonDomain:(long long)a4 osReasonCode:(long long)a5 isCrash:(BOOL)a6 isJetsam:(BOOL)a7 errorRepresentation:(id)a8;

@end
