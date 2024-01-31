@class NSDecimalNumber, NSString, PKPassLibrary, NSMutableDictionary, NSDate;

@interface PKPurchaseNewActionItem : NSObject <NSSecureCoding, NSCopying> {
    PKPassLibrary *_sharedLibrary;
    NSMutableDictionary *_serviceProviderData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDate *newExpirationDate;
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresAppletData;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_processLocalizableStrings:(id /* block */)a0;
- (void)serviceProviderDataWithItemForPass:(id)a0 completion:(id /* block */)a1;

@end
