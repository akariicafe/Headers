@class NSString, NSArray, NSURL, NSUUID, NSDictionary, NSMutableDictionary;

@interface PKTXTRecord : NSObject <NSSecureCoding> {
    NSDictionary *_stringDict;
    NSMutableDictionary *_seenDict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long supportsColor;
@property (readonly) unsigned long long supportsDuplex;
@property (readonly) unsigned long long supportsStaple;
@property (readonly) unsigned long long supportsCopies;
@property (readonly) unsigned long long supportsCollate;
@property (readonly) unsigned long long supportsBind;
@property (readonly) unsigned long long supportsSort;
@property (readonly) unsigned long long supportsScan;
@property (readonly) unsigned long long supportsFax;
@property (readonly) long long optionPunch;
@property (readonly) NSString *optionPaperMax;
@property (readonly) long long optionPriority;
@property (readonly) unsigned short tlsVersion;
@property (readonly) NSString *versionString;
@property (readonly) long long optionQueueTotal;
@property (readonly) NSString *resourcePath;
@property (readonly) NSString *printerType;
@property (readonly) NSString *printerProduct;
@property (readonly) NSURL *adminURL;
@property (readonly) NSArray *printerKind;
@property (readonly) NSString *location;
@property (readonly) NSArray *pageDescriptions;
@property (readonly) NSArray *urfCapabilities;
@property (readonly) NSUUID *UUID;
@property (readonly) NSString *authInfoRequired;

+ (id)txtRecordDictionaryForTxtRecord:(id)a0;

- (id)resourcePath;
- (id)location;
- (void)encodeWithCoder:(id)a0;
- (id)versionString;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)UUID;
- (id)initWithCoder:(id)a0;
- (id)initWithTXTRecordData:(id)a0;
- (id)_stringValueForKey:(id)a0;
- (unsigned short)tlsVersion;
- (unsigned long long)supportsColor;
- (unsigned long long)supportsDuplex;
- (unsigned long long)supportsCollate;
- (id)urfCapabilities;
- (id)_checkMake:(id)a0 propertyName:(id)a1 maker:(id /* block */)a2;
- (unsigned long long)_checkMakeAvail:(id)a0 propertyName:(id)a1;
- (long long)_checkMakeInt:(id)a0 propertyName:(id)a1;
- (id)_checkMakeString:(id)a0 propertyName:(id)a1;
- (id)_checkMakeStringArray:(id)a0 propertyName:(id)a1;
- (unsigned short)_checkMakeTLS:(id)a0 propertyName:(id)a1;
- (id)_checkMakeURL:(id)a0 propertyName:(id)a1;
- (id)_checkMakeUUID:(id)a0 propertyName:(id)a1;
- (id)_initWithLowercasedDictionary:(id)a0;
- (id)_wrapProduct:(id)a0;
- (id)adminURL;
- (id)authInfoRequired;
- (id)initWithNWTXTRecord:(id)a0;
- (id)optionPaperMax;
- (long long)optionPriority;
- (long long)optionPunch;
- (long long)optionQueueTotal;
- (id)pageDescriptions;
- (id)printerKind;
- (id)printerProduct;
- (id)printerType;
- (unsigned long long)supportsBind;
- (unsigned long long)supportsCopies;
- (unsigned long long)supportsFax;
- (unsigned long long)supportsScan;
- (unsigned long long)supportsSort;
- (unsigned long long)supportsStaple;

@end
