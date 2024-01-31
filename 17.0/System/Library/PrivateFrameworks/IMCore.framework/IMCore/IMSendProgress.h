@class NSDictionary, NSTimer;
@protocol IMSendProgressTimeDataSource, IMSendProgressDelegate;

@interface IMSendProgress : NSObject

@property (copy, nonatomic) NSDictionary *sendingItems;
@property (retain, nonatomic) id<IMSendProgressTimeDataSource> timeDataSource;
@property (retain, nonatomic) NSTimer *sendProgressTimer;
@property (nonatomic) float cachedSendProgress;
@property (nonatomic) BOOL wasShowing;
@property (weak, nonatomic) id<IMSendProgressDelegate> delegate;
@property (weak, nonatomic) id context;
@property (nonatomic) BOOL startSendProgressImmediately;

+ (Class)_timeDataSourceClass;

- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_hasSendingMessages;
- (void)_resetSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_sendProgressTimerFired:(id)a0;
- (void)_updateSendProgress;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (void)updateForItems:(id)a0 forced:(BOOL)a1;

@end
