@class DTTapMemoHandler, NSString, DTTapConfig, NSObject;
@protocol OS_dispatch_queue;

@interface DTTap : NSObject

@property (readonly, nonatomic) unsigned int tapID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, retain, nonatomic) DTTapMemoHandler *memoHandler;
@property (readonly, retain, nonatomic) DTTapConfig *config;
@property (nonatomic) BOOL isRunning;
@property (readonly, retain, nonatomic) NSString *uuid;

- (id)pause;
- (void)_start;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)start;
- (id)stop;
- (void).cxx_destruct;
- (void)_stop;
- (void)_unpause;
- (void)_pause;
- (id)unpause;
- (BOOL)_canFetchWhileArchiving;
- (id)_fetchDataForReason:(unsigned long long)a0;
- (id)fetchDataNow;
- (id)initWithConfig:(id)a0 memoHandler:(id)a1;
- (void)resumeDataProcessing;
- (void)suspendDataProcessing;

@end
