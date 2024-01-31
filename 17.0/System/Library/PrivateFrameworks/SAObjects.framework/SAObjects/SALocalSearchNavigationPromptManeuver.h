@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand

@property (copy, nonatomic) NSNumber *maneuverIndex;

+ (id)navigationPromptManeuver;
+ (id)navigationPromptManeuverWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
