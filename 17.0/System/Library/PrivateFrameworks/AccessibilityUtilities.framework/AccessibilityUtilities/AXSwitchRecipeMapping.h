@class NSString, AXReplayableGesture, NSUUID, AXSwitchGameControlButtonPress;

@interface AXSwitchRecipeMapping : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *longPressAction;
@property (retain, nonatomic) AXReplayableGesture *gesture;
@property (retain, nonatomic) AXReplayableGesture *longPressGesture;
@property (nonatomic) struct CGPoint { double x; double y; } holdPoint;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (retain, nonatomic) AXSwitchGameControlButtonPress *gameControlButtonPress;
@property (retain, nonatomic) AXSwitchGameControlButtonPress *longPressGameControlButtonPress;
@property (copy, nonatomic) NSUUID *switchUUID;
@property (nonatomic) long long switchOriginalAction;

+ (id)recipeMappingWithDictionaryRepresentation:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
