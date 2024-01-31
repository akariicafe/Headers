@class NSObject;
@protocol OS_dispatch_queue;

@interface BRCTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> *_executionQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 keywords:(id)a5 attachments:(id)a6 sendFullLog:(BOOL)a7 displayReason:(id)a8;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 keywords:(id)a5 attachments:(id)a6 sendFullLog:(BOOL)a7 displayReason:(id)a8 completionHandler:(id /* block */)a9;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 sendFullLog:(BOOL)a4 displayReason:(id)a5;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 sendFullLog:(BOOL)a4 displayReason:(id)a5 completionHandler:(id /* block */)a6;

@end
