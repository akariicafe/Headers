@class NSString;

@interface ATXContextActionIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSString *subtype;
@property (readonly, nonatomic) NSString *instanceId;

+ (id)actionTypeFromSpotlightActionType:(id)a0;
+ (id)_actionTypeFromShortcutsActionSuggestion:(id)a0;
+ (unsigned long long)_instanceIdentifierFromShortcutsActionSuggestion:(id)a0;
+ (id)_stringsWithPredictionReasons:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProactiveSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0 subType:(id)a1 instanceIdentifierInteger:(unsigned long long)a2;
- (id)initWithContext:(id)a0 subtype:(id)a1 instanceIdentifier:(id)a2;
- (BOOL)isEqualToATXContextActionIdentifier:(id)a0;

@end
