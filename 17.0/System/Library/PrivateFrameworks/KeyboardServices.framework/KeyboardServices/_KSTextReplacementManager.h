@class _KSTextReplacementCKStore, NSString, NSObject;
@protocol _KSTextReplacementSyncProtocol;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol>

@property (retain, nonatomic) _KSTextReplacementCKStore *ckStore;
@property (retain, nonatomic) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore;
@property (copy, nonatomic) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textReplacementStoreWithTestDirectory:(id)a0 withDelegate:(id)a1;

- (id)initWithDirectoryPath:(id)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)recordSyncStatus;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (double)minimumUptimeRemaining;
- (void).cxx_destruct;
- (void)notifyTextReplacementDidChange;

@end
