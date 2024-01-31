@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface NMLogActionsCoalescer : NSObject {
    NSMutableArray *_pendingLogActions;
    id _identifier;
    NSObject<OS_os_log> *_category;
    unsigned long long _partNumber;
}

@property (retain, nonatomic) NSString *prefix;
@property (nonatomic) unsigned long long messageBufferLimit;

- (void)flush;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logCategory:(id)a1;
- (void)_addAction:(id)a0 toPendingActions:(id)a1 limit:(unsigned long long)a2;
- (id)_logMessageFromPendingLogActions:(id)a0 includingPartNumber:(BOOL)a1;
- (void)_writeLogMessageFromActions:(id)a0 includingPartNumber:(BOOL)a1;
- (void)addLogAction:(id)a0;

@end
