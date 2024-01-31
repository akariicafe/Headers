@class CLKCComplicationDataSource, CLKComplication;
@protocol CLKComplicationDataSource;

@interface NTKTimelineDataOperation : NSObject {
    CLKCComplicationDataSource *_localDataSource;
    id<CLKComplicationDataSource> _remoteDataSource;
    CLKComplication *_remoteComplication;
}

@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) BOOL canceled;

+ (id)operationWithLocalDataSource:(id)a0;
+ (id)operationWithRemoteDataSource:(id)a0 complication:(id)a1;

- (void)_cancel;
- (void)_start;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_validateEntry:(id)a0;
- (id)_finalizedValidEntries:(id)a0;
- (BOOL)_validateTemplate:(id)a0;

@end
