@class NSNumber, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface BRCContainerCellularSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id<NSObject> _accountDidChangeNotificationObserver;
}

+ (id)containerCellularSettings;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPersonaID:(id)a0;
- (void)_accountDidChange;
- (BOOL)isCellularEnabled;

@end
