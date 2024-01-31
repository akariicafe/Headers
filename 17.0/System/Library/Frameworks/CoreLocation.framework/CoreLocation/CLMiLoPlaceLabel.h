@class NSUUID, NSString;

@interface CLMiLoPlaceLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *placeIdentifier;
@property (readonly, nonatomic) NSString *placeAdditionalInformation;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlaceIdentifier:(id)a0 placeAdditionalInformation:(id)a1;

@end
