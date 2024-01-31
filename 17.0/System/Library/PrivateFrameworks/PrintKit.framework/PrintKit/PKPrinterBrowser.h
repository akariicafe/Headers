@class NSString, NSMutableDictionary, PKPrintdRPC_BrowseClient;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject <PKPrintdRPC_BrowseClient_ClientProtocol> {
    unsigned char _originalCellFlag;
    unsigned char _originalWifiFlag;
    PKPrintdRPC_BrowseClient *_browserClient;
}

@property (retain, nonatomic) NSMutableDictionary *printers;
@property (retain, nonatomic) NSMutableDictionary *btDevices;
@property (readonly) BOOL delegateRespondsToProximityUpdate;
@property (nonatomic) id<PKPrinterBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)browserWithDelegate:(id)a0 infoDictionary:(id)a1;
+ (id)browserWithDelegate:(id)a0;
+ (id)browserWithDelegate:(id)a0 infoDictionary:(id)a1 provenance:(unsigned long long)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)browserAdded:(id)a0 removed:(id)a1;
- (void)btlePrinterFound:(id)a0;
- (void)btleRssiUpdated:(id)a0 rssi:(id)a1;
- (id)initWithDelegate:(id)a0 infoDictionary:(id)a1 provenance:(unsigned long long)a2;
- (void)printerAdded:(id)a0 more:(BOOL)a1;
- (void)printerRemoved:(id)a0 more:(BOOL)a1;

@end
