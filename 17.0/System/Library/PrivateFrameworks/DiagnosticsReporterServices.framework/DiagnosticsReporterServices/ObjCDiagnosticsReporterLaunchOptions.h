@class NSArray, NSString;

@interface ObjCDiagnosticsReporterLaunchOptions : NSObject {
    void /* unknown type, empty encoding */ files_to_attach;
    void /* unknown type, empty encoding */ log_path;
    void /* unknown type, empty encoding */ panic_string;
}

@property (nonatomic, copy) NSArray *files_to_attach;
@property (nonatomic, copy) NSString *log_path;
@property (nonatomic, copy) NSString *panic_string;

- (id)init;
- (void).cxx_destruct;

@end
