@interface ICASPaletteEngagementType : NSObject <AADataType>

@property (readonly, nonatomic) long long paletteEngagementType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithPaletteEngagementType:(long long)a0;

@end
