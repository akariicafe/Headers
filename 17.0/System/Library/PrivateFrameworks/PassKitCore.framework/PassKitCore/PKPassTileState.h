@class PKPassTileStateDefault, PKPassTileStateCheckIn, NSArray, PKPaymentPassAction, PKPassTileImage, PKPassTileStateMetadata;

@interface PKPassTileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileStateCheckIn *stateTypeCheckIn;
@property (readonly, nonatomic) PKPassTileStateDefault *stateTypeDefault;
@property (retain, nonatomic) PKPassTileStateMetadata *metadata;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) PKPassTileState *actionState;
@property (retain, nonatomic) PKPassTileImage *icon;
@property (copy, nonatomic) NSArray *actionDictionaries;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) NSArray *actions;

+ (id)_createForDictionary:(id)a0 withTileType:(long long)a1;
+ (id)_createWithType:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
