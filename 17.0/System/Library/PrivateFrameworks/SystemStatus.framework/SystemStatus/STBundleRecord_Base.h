@class NSString, NSURL;

@interface STBundleRecord_Base : NSObject <STBundleRecord>

@property (class, readonly, nonatomic) NSString *recordType;

@property (readonly, copy, nonatomic) NSURL *recordBundleURL;
@property (readonly, copy, nonatomic) NSString *recordIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleRecordForBundleAtURL:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleInfoDictionary:(id)a0 bundleRecordIdentifier:(id)a1 bundleURL:(id)a2;

@end
