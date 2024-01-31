@class NSArray, NSString, NSData, NSURL;

@interface GTDiagnosticsIssue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *callstack;
@property (copy, nonatomic) NSData *cpuCallstackData;
@property (nonatomic) unsigned int cpuCallstackFramesNum;
@property (copy, nonatomic) NSString *libraryOnlineSource;
@property (copy, nonatomic) NSData *libraryOfflineSource;
@property (copy, nonatomic) NSString *libraryHash;
@property (nonatomic) BOOL isDefaultLibrary;
@property (copy, nonatomic) NSString *metalFunctionName;
@property (copy, nonatomic) NSURL *metalFunctionFile;
@property (copy, nonatomic) NSString *metalLogMessage;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
