@class NSURL, NSMutableArray;
@protocol CADDiagnosticLogContext;

@interface CalDAVLogScrubber : NSObject {
    NSMutableArray *_urlsToCleanUp;
}

@property (class, nonatomic) BOOL sortICSDocuments;

@property (retain, nonatomic) NSURL *inputURL;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) id<CADDiagnosticLogContext> context;

+ (id)log;
+ (BOOL)redactLog:(id)a0 toOutputFile:(id)a1 context:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)compressFileAt:(id)a0 to:(id)a1;
- (id)decompressedInputFile;
- (BOOL)scrub;
- (id)temporaryUncompressedFile;

@end
