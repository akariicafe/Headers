@class NSArray, GEOComposedString;
@protocol GEOServerFormattedString;

@interface MNTransitInstruction : NSObject

@property (copy, nonatomic) NSArray *majorFormattedInstruction;
@property (copy, nonatomic) NSArray *minorFormattedInstruction;
@property (copy, nonatomic) NSArray *tertiaryFormattedInstruction;
@property (retain, nonatomic) NSArray *majorInstructionStrings;
@property (retain, nonatomic) NSArray *minorInstructionStrings;
@property (retain, nonatomic) NSArray *tertiaryInstructionStrings;
@property (retain, nonatomic) id<GEOServerFormattedString> departureBarInstruction;
@property (nonatomic) long long departureBarStyle;
@property (retain, nonatomic) GEOComposedString *departureBarInstructionString;
@property (nonatomic) int departureBarFormatStyle;
@property (retain, nonatomic) id<GEOServerFormattedString> countStopsFormattedString;
@property (retain, nonatomic) id<GEOServerFormattedString> expandableListFormattedString;
@property (retain, nonatomic) GEOComposedString *countStopsString;
@property (retain, nonatomic) GEOComposedString *expandableListString;
@property (retain, nonatomic) id<GEOServerFormattedString> primaryTimeInstruction;
@property (retain, nonatomic) id<GEOServerFormattedString> secondaryTimeinstruction;
@property (retain, nonatomic) GEOComposedString *primaryTimeInstructionString;
@property (retain, nonatomic) GEOComposedString *secondaryTimeInstructionString;
@property (nonatomic) BOOL hideTimeInstructionsWhenCollapsed;
@property (readonly, nonatomic) long long context;

+ (id)instructionForUncertainArrivalToStationStep:(id)a0 context:(long long)a1;

- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (id)instructionSet;
- (void)_fillInInstructions;
- (id)formattedInstructionForType:(long long)a0;
- (id)instructionSetsForInstructionType:(long long)a0;
- (id)instructionStringForType:(long long)a0;
- (id)overridenInstructionsMapping;
- (void)refreshInstructionStrings;

@end
