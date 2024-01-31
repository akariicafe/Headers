@class NSString;

@interface MADPersonIdentificationResultItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *mdID;
@property (readonly, nonatomic) NSString *personIdentifier;
@property (readonly, nonatomic) NSString *personName;
@property (readonly, nonatomic) BOOL verified;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) float confidence;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonIdentifier:(id)a0 personName:(id)a1 mdID:(id)a2 verified:(BOOL)a3 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 andConfidence:(float)a5;

@end
