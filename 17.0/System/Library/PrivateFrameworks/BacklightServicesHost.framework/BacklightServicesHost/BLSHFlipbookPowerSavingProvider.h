@class NSString;
@protocol BLSHFlipbook;

@interface BLSHFlipbookPowerSavingProvider : NSObject <BLSHFlipbookPowerSavingProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHFlipbook> _lock_flipbook;
    unsigned long long _lock_count;
    unsigned long long _lock_reasonsCount[8];
}

@property (weak, nonatomic) id<BLSHFlipbook> flipbook;
@property (readonly, nonatomic, getter=isFlipbookPowerSavingEnabled) BOOL flipbookPowerSavingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)decrementDisablePowerSavingUsageCountForReason:(unsigned long long)a0;
- (void)incrementDisablePowerSavingUsageCountForReason:(unsigned long long)a0;
- (id)lock_description;

@end
