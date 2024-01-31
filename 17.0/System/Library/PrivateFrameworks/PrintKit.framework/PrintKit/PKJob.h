@class NSString, PKPrintSettings, NSData, NSDate, NSArray;

@interface PKJob : NSObject

@property (readonly) long long number;
@property (readonly) long long localJobID;
@property (readonly) NSString *printerDisplayName;
@property (readonly) NSString *printerLocation;
@property (readonly) long long printerKind;
@property (readonly) PKPrintSettings *settings;
@property (readonly) NSDate *timeAtCreation;
@property (readonly) long long state;
@property (readonly) NSData *thumbnailImage;
@property (readonly) long long mediaSheetsCompleted;
@property (readonly) NSDate *timeAtProcessing;
@property (readonly) NSDate *timeAtCompleted;
@property (readonly) long long mediaSheets;
@property (readonly) long long mediaProgress;
@property (readonly) long long remoteJobId;
@property (readonly) NSString *localizedStatusString;
@property (readonly) NSString *localizedJobOptions;
@property (readonly) NSString *PIN;
@property (readonly) NSString *jobPrinterStateMessage;
@property (readonly) NSArray *jobPrinterStateReasons;
@property (readonly) NSString *jobStateMessage;
@property (readonly) NSArray *jobStateReasons;
@property (readonly) NSString *jobHeldUntil;

+ (id)jobs;
+ (id)currentJob;
+ (void)currentJobCompletionHandler:(id /* block */)a0;
+ (void)jobsCompletionHandler:(id /* block */)a0;

- (long long)update;
- (id)description;
- (void).cxx_destruct;
- (long long)number;
- (void)cancel;
- (void)_updateStateFromParameters:(const struct Printd_Job_Parameters { id x0; } *)a0;
- (id)initWithJobParameters:(const struct Printd_Job_Parameters { id x0; } *)a0;
- (void)updateCompletionHandler:(id /* block */)a0;

@end
