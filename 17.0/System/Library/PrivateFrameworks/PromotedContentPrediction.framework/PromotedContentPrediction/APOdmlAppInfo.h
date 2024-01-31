@class NSString;

@interface APOdmlAppInfo : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long adamID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleID:(id)a0 adamID:(unsigned long long)a1;

@end
