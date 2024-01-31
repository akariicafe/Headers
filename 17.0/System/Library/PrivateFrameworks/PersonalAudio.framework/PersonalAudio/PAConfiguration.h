@class NSDictionary;

@interface PAConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *preset;
@property (retain, nonatomic) NSDictionary *presetAdjustments;
@property (retain, nonatomic) NSDictionary *audiogramSettings;
@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long shape;

+ (id)configurationWithRawAdjustment:(unsigned long long)a0;
+ (id)dataFromPreset:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; } *)a0;
+ (id)configurationFromType:(unsigned long long)a0;
+ (id)configurationWithAudiogram:(id)a0;
+ (id)configurationWithLevel:(unsigned long long)a0 andShape:(unsigned long long)a1;
+ (id)configurationWithPreset:(id)a0 andAdjustments:(id)a1;
+ (id)paramDataWithValue:(float)a0 andOffset:(int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { float x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x1; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x2; } *)transparencySettingsForAddress:(id)a0;
- (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; } *)readSettingsFromPreset:(id)a0;
- (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; } *)settingsFromConfiguration:(BOOL)a0;

@end
