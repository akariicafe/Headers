@class NSString, CLKDevice;

@interface NTKEditOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long swatchStyle;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NSString *dailySnapshotKey;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameForAction;
@property (readonly, nonatomic) NSString *uniqueName;

+ (id)optionsDescription;
+ (struct CGSize { double x0; double x1; })sizeForSwatchStyle:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)JSONObjectRepresentationForFace:(id)a0;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (BOOL)isPrideOption;
- (BOOL)isValidOption;
- (BOOL)optionExistsInDevice:(id)a0;

@end
