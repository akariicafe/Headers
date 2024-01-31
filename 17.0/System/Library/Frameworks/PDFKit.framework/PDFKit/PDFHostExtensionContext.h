@class PDFHostViewController, NSString;

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol>

@property (weak, nonatomic) PDFHostViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (oneway void)extensionSnapshotToHost:(id)a0 scale:(double)a1;
- (oneway void)extensionToHost:(id)a0;

@end
