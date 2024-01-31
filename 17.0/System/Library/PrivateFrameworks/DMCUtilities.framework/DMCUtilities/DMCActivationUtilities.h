@class NSNumber, NSDictionary, NSMutableDictionary;

@interface DMCActivationUtilities : NSObject

@property (retain, nonatomic) NSNumber *hrnModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (retain, nonatomic) NSDictionary *activationRecordCache;
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;

+ (id)sharedInstance;

- (id)initPrivate;
- (int)activationState;
- (void).cxx_destruct;
- (void)_clearCache;
- (id)activationRecord;
- (void)addDidBecomeReadyKey:(id)a0 callback:(id /* block */)a1;
- (int)hrnMode;

@end
