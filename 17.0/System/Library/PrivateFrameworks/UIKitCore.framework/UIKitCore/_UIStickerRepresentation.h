@class NSData, NSString;

@interface _UIStickerRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *role;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createPNGDataFromHEICData;

@end
