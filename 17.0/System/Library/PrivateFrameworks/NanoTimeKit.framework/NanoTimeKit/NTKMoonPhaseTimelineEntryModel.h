@class NSString, NSDate;

@interface NTKMoonPhaseTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) NSString *phaseName;
@property (nonatomic) unsigned long long phaseNumber;
@property (nonatomic) long long hemisphere;
@property (nonatomic) long long event;
@property (retain, nonatomic) NSDate *eventDate;
@property (nonatomic) BOOL currentEvent;
@property (retain, nonatomic) NSString *animationGroup;

+ (id)imageProviderWithOnePieceImage:(id)a0;
+ (id)textForMoonPhaseEvent:(long long)a0 useShort:(BOOL)a1;
+ (id)circular:(id)a0 isMedium:(BOOL)a1;
+ (id)extraLarge:(id)a0;
+ (id)largeModular:(id)a0;
+ (id)largeUtility:(id)a0;
+ (id)providerWithText:(id)a0;
+ (id)smallModular:(id)a0;
+ (id)smallUtility:(id)a0;
+ (id)textForMoonPhaseEvent:(long long)a0;

- (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)a0;

@end
