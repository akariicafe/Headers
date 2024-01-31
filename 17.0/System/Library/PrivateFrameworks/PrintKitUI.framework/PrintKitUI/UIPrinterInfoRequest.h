@class NSDictionary, PKPrinter;

@interface UIPrinterInfoRequest : NSObject {
    PKPrinter *_printer;
}

@property (nonatomic) int requestState;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSDictionary *printerInfo;

+ (id)requestInfoForPrinter:(id)a0;

- (void).cxx_destruct;
- (void)requestPrinterInfo;

@end
