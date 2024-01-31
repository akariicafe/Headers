@class NSString, NSXPCConnection, NSURL, NSObject, NSMutableArray;
@protocol OS_os_transaction;

@interface PTTraceConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *planNameOrPath;
@property (nonatomic) BOOL overrideIncludeOSSignposts;
@property (nonatomic) BOOL overrideIncludeOSLogs;
@property (nonatomic) BOOL overrideSymbolicate;
@property (retain, nonatomic) NSObject<OS_os_transaction> *tracingActiveTransaction;
@property (nonatomic) BOOL symbolicate;
@property (nonatomic) unsigned long long callstackSamplingRateMS;
@property (retain, nonatomic) NSMutableArray *traceGroups;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long traceType;
@property (retain, nonatomic) NSURL *traceDirectoryURL;
@property (retain, nonatomic) NSString *traceName;
@property (nonatomic) int ownerPID;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) BOOL compressWhenFinished;
@property (nonatomic) BOOL includeOSLogs;
@property (nonatomic) BOOL includeOSSignposts;
@property (nonatomic) unsigned long long traceTimeoutS;
@property (nonatomic) unsigned long long traceDurationSecs;
@property (nonatomic) BOOL skipNotification;
@property (nonatomic) BOOL useTraceRecord;
@property (nonatomic) BOOL includeKernelStacks;
@property (nonatomic) unsigned long long kernelBufferSizeMB;
@property (nonatomic) unsigned int kernelBufferDrainQoS;
@property (nonatomic) unsigned long long kernelBufferDrainRateMS;

+ (BOOL)resetConfig;
+ (id)_defaultTraceRecordConfig;
+ (id)configWithDictionary:(id)a0;
+ (id)configWithTemplate:(unsigned long long)a0;
+ (id)configWithTracePlanName:(id)a0;
+ (id)configWithTracePlanURL:(id)a0;
+ (id)getCurrentConfig;

- (void)encodeWithCoder:(id)a0;
- (BOOL)storeConfig;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_getRemoteObjectProxy;
- (void)_initConnection;
- (void)_invalidateSession;
- (BOOL)validateConfig;

@end
