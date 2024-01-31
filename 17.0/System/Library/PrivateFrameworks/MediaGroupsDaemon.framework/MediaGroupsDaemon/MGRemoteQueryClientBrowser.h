@class NSSet, NSError, NSObject;
@protocol OS_nw_browser, OS_dispatch_queue, MGRemoteQueryClientBrowserDelegate;

@interface MGRemoteQueryClientBrowser : NSObject

@property (retain, nonatomic) NSObject<OS_nw_browser> *browser;
@property (retain, nonatomic) NSSet *knownTargets;
@property (retain, nonatomic) NSSet *updatedTargets;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSError *error;
@property (readonly, weak, nonatomic) id<MGRemoteQueryClientBrowserDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (id)description;
- (void).cxx_destruct;
- (void)_startBrowsing;
- (void)_applyUpdates;
- (id)initWithDelegate:(id)a0 dispatchQueue:(id)a1;
- (void)_handleBrowseChangeFromTarget:(id)a0 toTarget:(id)a1 applyBatch:(BOOL)a2;
- (id)_prepareBrowseDescriptor;
- (id)_prepareBrowseParameters;
- (void)_prepareBrowserHandlers;
- (id)_targetForBrowseResult:(id)a0;

@end
