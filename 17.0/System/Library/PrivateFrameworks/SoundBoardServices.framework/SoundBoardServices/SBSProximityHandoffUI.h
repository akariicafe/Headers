@class NSString, NSXPCConnection;
@protocol SBSProximityHandoffUIDelegate, SBSImplementer;

@interface SBSProximityHandoffUI : NSObject <SBSProximityHandoffUICallerDelegate> {
    NSXPCConnection *_sbConnection;
    id<SBSImplementer> _sbProxy;
}

@property (weak, nonatomic) id<SBSProximityHandoffUIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)complete;
- (id)init;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)cancel:(id)a0;
- (void)handoffUpdating;
- (void)handoffInactive;
- (void)cancelWithHandoffType:(unsigned long long)a0 error:(id)a1;
- (void)completeWithHandoffType:(unsigned long long)a0;
- (void)handoffCancelled;
- (void)handoffCompleted;
- (void)handoffStarted;
- (void)startWithArtworkColors:(id)a0;
- (void)startWithArtworkColors:(id)a0 handoffType:(unsigned long long)a1;
- (void)startWithHandoffType:(unsigned long long)a0;
- (void)updateIntensity:(float)a0;
- (void)updateIntensity:(float)a0 handoffType:(unsigned long long)a1;

@end
