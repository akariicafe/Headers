@class NSString, NSObject;
@protocol OS_dispatch_queue, AXPhoenixDataCollectionManagerDelegate;

@interface AXPhoenixDataCollectionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *uploadErrorMessage;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long packagesRemaining;
@property (weak, nonatomic) id<AXPhoenixDataCollectionManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)removeOldData;
- (void)reportFalsePositive:(id)a0;
- (void)timerTick;
- (void)updateUploadStatus:(long long)a0 error:(id)a1;
- (void)uploadPackages;

@end
