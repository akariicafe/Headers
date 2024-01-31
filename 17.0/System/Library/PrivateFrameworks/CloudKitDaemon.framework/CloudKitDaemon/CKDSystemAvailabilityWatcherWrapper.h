@class NSString;
@protocol CKDSystemAvailabilityWatcher;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject

@property (weak, nonatomic) id<CKDSystemAvailabilityWatcher> delegate;
@property (nonatomic) unsigned long long savedDelegateHash;
@property (copy, nonatomic) NSString *personaID;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)postSystemAvailabilityChanged:(unsigned long long)a0;

@end
