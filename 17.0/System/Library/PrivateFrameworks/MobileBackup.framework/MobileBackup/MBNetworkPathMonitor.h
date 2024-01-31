@class MBCellularDataSubscriptionMonitor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_nw_path_monitor;

@interface MBNetworkPathMonitor : NSObject {
    _Atomic BOOL _started;
    NSObject<OS_nw_path_monitor> *_wifiPathMonitor;
    NSObject<OS_nw_path_monitor> *_wiredPathMonitor;
    NSObject<OS_nw_path_monitor> *_cellularPathMonitor;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _wifiPathState;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _wiredPathState;
    struct { BOOL isMonitored; BOOL isAvailable; BOOL isExpensive; BOOL isConstrained; } _cellularPathState;
    unsigned long long _backupOnCellularSupport;
    BOOL _backupOnCellularSupportChanged;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_group> *initialWiFiStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialWiredStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialCellularStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialBackupOnCellularSupportGroup;
@property (retain) MBCellularDataSubscriptionMonitor *dataSubscriptionMonitor;
@property (copy, nonatomic) id /* block */ networkPathUpdateHandler;
@property (copy, nonatomic) id /* block */ backupOnCellularSupportUpdateHandler;
@property (readonly) unsigned long long backupOnCellularSupport;
@property (readonly) int cellularRadioType;

+ (const char *)_pathTypeStringWithPathType:(int)a0;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_startWiFiMonitor;
- (void)fetchNetworkConnectivityWithBlock:(id /* block */)a0;
- (void)start;
- (void)_performBlock:(id /* block */)a0;
- (void)_startCellularMonitor;
- (BOOL)_updateState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } *)a0 path:(id)a1 pathType:(int)a2;
- (void)_handleWiFiStateChange;
- (void)_handleCellularStateChange:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a0 backupOnCellularSupport:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_cancelMonitors;
- (void)cancel;
- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; unsigned long long x4; })networkConnectivity;

@end
