@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL nameFieldFirstNameOptional;
@property (nonatomic) BOOL nameFieldLastNameOptional;
@property (nonatomic) BOOL nameFieldShouldBeDisplayed;
@property (nonatomic) BOOL emailAddressFieldShouldBeDisplayed;
@property (nonatomic) BOOL phoneNumberFieldShouldBeDisplayed;
@property (nonatomic) BOOL nameEditable;
@property (nonatomic) BOOL emailAddressEditable;
@property (nonatomic) BOOL phoneNumberEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
