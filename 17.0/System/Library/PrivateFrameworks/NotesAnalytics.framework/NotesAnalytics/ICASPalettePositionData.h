@class NSString, ICASPalettePosition;

@interface ICASPalettePositionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASPalettePosition *paletteStartPosition;
@property (readonly, nonatomic) ICASPalettePosition *paletteEndPosition;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPaletteStartPosition:(id)a0 paletteEndPosition:(id)a1;

@end
