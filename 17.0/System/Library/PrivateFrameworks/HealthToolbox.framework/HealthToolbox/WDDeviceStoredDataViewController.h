@class NSString, HKDevice;

@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController

@property (retain, nonatomic) HKDevice *device;
@property (retain, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (void)deleteAllStoredData;
- (BOOL)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end
