@class NSObject;
@protocol OS_dispatch_source;

@interface _DKComplicationMonitor : _DKMonitor {
    int _tokens[2];
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)entitlements;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)asyncUpdateCurrentActiveComplicationsContext;
- (void)fetchActiveComplications:(id /* block */)a0;

@end
