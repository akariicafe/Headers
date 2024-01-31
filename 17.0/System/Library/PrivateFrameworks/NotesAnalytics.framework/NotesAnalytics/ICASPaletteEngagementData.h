@class NSString, ICASPaletteEngagementType;

@interface ICASPaletteEngagementData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASPaletteEngagementType *paletteEngagementType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPaletteEngagementType:(id)a0;

@end
