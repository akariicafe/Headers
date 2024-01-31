@class SUInstallOptions, NSObject, SUDownload;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor> {
    NSObject<OS_dispatch_queue> *_queue;
    SUDownload *_download;
    unsigned long long _representedConstraints;
    SUInstallOptions *_installOptions;
    id<SUInstallationConstraintMonitorDelegate> _queue_delegate;
}

@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly, retain, nonatomic) SUInstallOptions *installOptions;
@property (nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long representedConstraints;
@property (readonly, nonatomic) unsigned long long unsatisfiedConstraints;

- (void)dealloc;
- (BOOL)isSatisfied;
- (void).cxx_destruct;
- (id)initOnQueue:(id)a0 withRepresentedInstallationConstraints:(unsigned long long)a1 andDownload:(id)a2;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (id)initOnQueue:(id)a0 withDownload:(id)a1 andInstallOptions:(id)a2;
- (id)initOnQueue:(id)a0 withRepresentedInstallationConstraints:(unsigned long long)a1 andDownload:(id)a2 andInstallOptions:(id)a3;
- (unsigned long long)unsatisfiedConstraintsWithIgnorableConstraints:(unsigned long long)a0;

@end
