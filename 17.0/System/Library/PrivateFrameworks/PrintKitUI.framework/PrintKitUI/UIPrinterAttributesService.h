@class PKPrinter;

@interface UIPrinterAttributesService : NSObject {
    long long _printerWarningPollTime;
    PKPrinter *_printer;
    id /* block */ _completionHandler;
}

+ (id)instance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)pollForPrinterWarningStatus;
- (void)startPollForPrinterWarningStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopPrinterWarningPolling;

@end
