@class NSData, DIStatFS, NSString;

@interface DIAttachParams : DIBaseParams

@property (nonatomic) BOOL quarantine;
@property (retain, nonatomic) NSData *quarantineBuffer;
@property (nonatomic) unsigned long long commandSize;
@property (nonatomic) unsigned long long regEntryID;
@property (nonatomic) BOOL handleRefCount;
@property (retain, nonatomic) DIStatFS *inputStatFS;
@property (copy, nonatomic) NSString *inputMountedFrom;
@property (nonatomic) BOOL emulateExternalDisk;
@property BOOL autoMount;
@property (nonatomic) long long fileMode;
@property (nonatomic) unsigned long long rawBlockSize;
@property (nonatomic) BOOL onDiskCache;
@property (nonatomic) BOOL uniqueDevice;
@property (nonatomic) BOOL shouldValidateShadows;

+ (BOOL)supportsSecureCoding;
+ (BOOL)copyWithURL:(id)a0 outURLStr:(char *)a1 maxLen:(unsigned long long)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)setupDefaults;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;
- (id)newAttachWithError:(id *)a0;
- (BOOL)reOpenIfWritableWithError:(id *)a0;
- (BOOL)updateStatFSWithError:(id *)a0;

@end
