@class NSData, MOShieldLabel;

@interface MOShieldConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *backgroundColorData;
@property (readonly, copy) NSData *backgroundEffectData;
@property (readonly, copy) NSData *iconData;
@property (readonly) MOShieldLabel *title;
@property (readonly) MOShieldLabel *subtitle;
@property (readonly) MOShieldLabel *primaryButtonLabel;
@property (readonly, copy) NSData *primaryButtonColorData;
@property (readonly) MOShieldLabel *secondaryButtonLabel;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBackgroundColorData:(id)a0 backgroundEffectData:(id)a1 iconData:(id)a2 title:(id)a3 subtitle:(id)a4 primaryButtonLabel:(id)a5 primaryButtonColorData:(id)a6 secondaryButtonLabel:(id)a7;

@end
