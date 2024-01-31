@class NSUUID, C2Multipeer, NSObject;
@protocol OS_nw_browser, OS_nw_listener;

@interface C2MultipeerDiscovery : NSObject

@property (weak, nonatomic) C2Multipeer *parent;
@property (retain, nonatomic) NSUUID *myPeerID;
@property (retain, nonatomic) NSObject<OS_nw_listener> *listener;
@property (retain, nonatomic) NSObject<OS_nw_browser> *browser;

- (id)_listener;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (id)_browser;
- (id)_peerToPeerParameters;

@end
