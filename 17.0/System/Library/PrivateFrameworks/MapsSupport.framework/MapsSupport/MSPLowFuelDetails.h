@class NSString, NSNumber, NSData;

@interface MSPLowFuelDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSNumber *engineType;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSData *iconDataCarPlay;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 engineType:(id)a2;

@end
