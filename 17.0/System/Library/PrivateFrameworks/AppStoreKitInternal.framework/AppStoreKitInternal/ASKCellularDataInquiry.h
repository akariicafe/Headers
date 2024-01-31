@class NSURL, NSBundle;

@interface ASKCellularDataInquiry : NSObject

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) BOOL isSupported;
@property (readonly, nonatomic) BOOL isEnabledForDevice;
@property (readonly, nonatomic) BOOL isEnabledForBundle;

- (id)init;
- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;

@end
