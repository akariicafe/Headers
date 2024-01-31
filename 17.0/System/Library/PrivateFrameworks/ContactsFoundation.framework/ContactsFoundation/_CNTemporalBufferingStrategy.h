@class NSString;
@protocol CNScheduler, CNCancelable;

@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy> {
    double _interval;
    id<CNScheduler> _scheduler;
}

@property (retain) id<CNCancelable> sendToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
