@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject

@property (readonly, nonatomic) CMSwimTrackerInternal *_internal;

+ (BOOL)isAvailable;
+ (unsigned long long)maxSwimDataEntries;

- (id)init;
- (void)dealloc;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)querySWOLFSummaryWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
