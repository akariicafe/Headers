@class PXCPLStatusProviderMonitor, NSString, PXObservable, PXCPLActionManager, PXCPLUIStatus, NSDate;
@protocol PXCPLStatusProvider;

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {
    PXCPLStatusProviderMonitor *_statusProviderMonitor;
    PXObservable<PXCPLStatusProvider> *_statusProvider;
}

@property (copy, nonatomic) NSDate *currentDateForTesting;
@property (readonly, nonatomic) PXCPLUIStatus *status;
@property (readonly, nonatomic) PXCPLActionManager *actionManager;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateStatus;
- (id)initWithStatusProvider:(id)a0 actionManager:(id)a1 presentationStyle:(unsigned long long)a2;
- (id)initWithPhotoLibrary:(id)a0 actionManager:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_updateStatusProviderMonitor;
- (void).cxx_destruct;
- (void)_statusDidChange:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 actionManager:(id)a1 presentationStyle:(unsigned long long)a2;

@end
