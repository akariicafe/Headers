@class NSString, NSDictionary, NSDate;

@interface WBSAddressBookMatch : NSObject <WBSFormAutoFillItem, NSSecureCoding> {
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSString *property;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressBookMatchWithDictionaryRepresentation:(id)a0;

- (void)_setValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 property:(id)a1 key:(id)a2 identifier:(id)a3;
- (id)initWithValue:(id)a0 property:(id)a1 key:(id)a2 identifier:(id)a3 label:(id)a4;
- (id)initWithValue:(id)a0 property:(id)a1 key:(id)a2 identifier:(id)a3 label:(id)a4 uniqueID:(id)a5;

@end
