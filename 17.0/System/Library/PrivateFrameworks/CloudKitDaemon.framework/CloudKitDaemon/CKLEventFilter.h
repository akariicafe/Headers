@class NSDictionary, NSString;

@interface CKLEventFilter : NSObject

@property (nonatomic) unsigned long long logTypes;
@property (retain, nonatomic) NSDictionary *categoriesBySubsystem;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL simulatorMessagesOnly;
@property (nonatomic) BOOL onlyTestLogs;

- (BOOL)matchesEvent:(id)a0;
- (void).cxx_destruct;
- (void)_initFilterDict;
- (BOOL)hasOnlyLogType:(unsigned long long)a0;
- (BOOL)hasLogType:(unsigned long long)a0;
- (id)initWithLogTypes:(unsigned long long)a0;

@end
