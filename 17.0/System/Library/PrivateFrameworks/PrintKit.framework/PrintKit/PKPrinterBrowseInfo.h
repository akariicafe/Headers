@class NSUUID, NSDictionary, NSURL, NSString, PKPrinterBonjourEndpoint;

@interface PKPrinterBrowseInfo : NSObject <NSSecureCoding> {
    NSUUID *_cachedUUID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *printerURL;
@property (readonly) PKPrinterBonjourEndpoint *bonjourName;
@property (readonly) NSDictionary *txtRecord;
@property (readonly) long long type;
@property (readonly) NSUUID *uuid;
@property (retain) NSUUID *btleUUID;
@property long long btleMeasuredPower;
@property long long proximity;
@property (readonly) BOOL isIPPS;
@property (readonly) NSString *makeAndModel;
@property (readonly) NSString *location;

+ (void)findPrinterWithBonjourEndpoint:(id)a0 withTimeout:(double)a1 completionHandler:(id /* block */)a2;

- (unsigned long long)hash;
- (id)uuid;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (long long)type;
- (id)initWithCoder:(id)a0;
- (id)initWithBonjourName:(id)a0 txtRecord:(id)a1;
- (id)initWithResolvedBonjourName:(id)a0;
- (BOOL)isEqualToBrowseInfo:(id)a0;
- (BOOL)isIPPS;
- (void)resolveOnMainQueue:(id /* block */)a0;
- (id)txtRecordObjectForKey:(id)a0;

@end
