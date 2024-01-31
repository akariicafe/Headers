@class NSString, NSDictionary, PKPrinterBrowseInfo, NSURL, PKPrinterDescription, NSDate;

@interface PKPrinter : NSObject {
    PKPrinterBrowseInfo *_browseInfo;
    PKPrinterDescription *_printerDescription;
    NSDate *_printerDescriptionTime;
    struct PrintJobRequest_Client { void /* function */ **x0; id x1; id x2; } *_job_request;
}

@property (readonly) PKPrinterBrowseInfo *browseInfo;
@property (readonly) NSString *description;
@property (readonly) NSString *displayName;
@property (readonly) NSString *name;
@property (readonly) NSURL *printerURL;
@property (readonly) NSString *uuid;
@property (readonly) NSString *location;
@property (readonly) NSString *makeAndModel;
@property (readonly) long long kind;
@property (readonly) long long type;
@property (readonly) BOOL supportsColor;
@property (readonly) BOOL supportsDuplex;
@property (readonly) BOOL supportsJobAccountID;
@property (readonly) long long jobAccountIDSupport;
@property (readonly) unsigned long long jobTypesSupported;
@property (readonly) BOOL hasPrintInfoSupported;
@property (readonly) NSDictionary *printInfoSupported;
@property (readonly) BOOL hasIdentifyPrinterOp;
@property (readonly) long long accessState;

+ (BOOL)printerLookupWithName:(id)a0 andTimeout:(double)a1;
+ (id)printerWithName:(id)a0;
+ (void)printerWithURL:(id)a0 discoveryTimeout:(double)a1 completionHandler:(id /* block */)a2;
+ (void)printerWithBonjourEndpoint:(id)a0 discoveryTimeout:(double)a1 completionHandler:(id /* block */)a2;
+ (void)printerWithEndpointData:(id)a0 discoveryTime:(double)a1 completionHandler:(id /* block */)a2;
+ (id)printerWithName:(id)a0 discoveryTimeout:(double)a1;
+ (void)printerWithName:(id)a0 discoveryTimeout:(double)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)bonjourName;
- (void)_checkAvailable:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)abortJobCompletionHandler:(id /* block */)a0;
- (id)availableRollPapersPreferBorderless:(BOOL)a0;
- (void)cancelUnlock;
- (void)finishJobCompletionHandler:(id /* block */)a0;
- (void)getSupplyLevels:(id /* block */)a0;
- (void)identifySelf;
- (BOOL)isPaperReady:(id)a0;
- (BOOL)knowsReadyPaperList;
- (id)matchedPaper:(id)a0 preferBorderless:(BOOL)a1 withDuplexMode:(id)a2 didMatch:(BOOL *)a3;
- (id)papersForDocumentWithSize:(struct CGSize { double x0; double x1; })a0 andDuplex:(BOOL)a1;
- (id)papersForDocumentWithSize:(struct CGSize { double x0; double x1; })a0 scaleUpOnRoll:(BOOL)a1 andDuplex:(BOOL)a2;
- (id)papersForPhotoWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)pollForPrinterStatusQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)printURL:(id)a0 ofType:(id)a1 printSettings:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeCredentialsFromKeychain;
- (long long)sendData:(const char *)a0 ofLength:(long long)a1;
- (long long)startJob:(id)a0 ofType:(id)a1;
- (void)unlockWithCompletionHandler:(id /* block */)a0;
- (BOOL)isFromMCProfile;
- (BOOL)_allowedToPrintToThisPrinter;
- (void)_identifySelf:(id)a0;
- (void)_updateAccessState:(long long)a0;
- (void)_updateDescription:(id)a0 browseInfo:(id)a1;
- (struct PrintJobRequest_Client { void /* function */ **x0; id x1; id x2; } *)createRequest:(id)a0 ofType:(id)a1;
- (int)feedOrientation:(id)a0;
- (void)finalizeJob:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initPKPrinterWithBrowseInfo:(id)a0;
- (void)pollForPrinterAttributes:(id)a0 completionHandler:(id /* block */)a1;
- (void)withDescriptionAsync:(id /* block */)a0;

@end
