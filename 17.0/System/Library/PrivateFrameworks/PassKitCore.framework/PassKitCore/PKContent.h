@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKBarcode *barcode;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSArray *systemAppBundleIdentifiers;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)createWithFileURL:(id)a0 dataTypeIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2 passType:(unsigned long long)a3;

@end
