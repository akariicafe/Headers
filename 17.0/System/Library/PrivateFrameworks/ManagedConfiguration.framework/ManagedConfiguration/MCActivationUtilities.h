@class NSNumber, NSDictionary, NSMutableDictionary;

@interface MCActivationUtilities : NSObject

@property (retain, nonatomic) NSNumber *isHRNModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (retain, nonatomic) NSDictionary *activationRecordCache;
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (int)isActivated;
- (void).cxx_destruct;
- (void)_clearCache;
- (id)activationRecord;
- (void)addDidBecomeReadyKey:(id)a0 callback:(id /* block */)a1;
- (int)isHRNMode;

@end
