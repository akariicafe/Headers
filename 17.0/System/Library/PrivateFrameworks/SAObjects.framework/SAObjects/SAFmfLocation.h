@class NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (copy, nonatomic) NSNumber *distance;
@property (retain, nonatomic) SAPersonAttribute *theFriend;
@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSNumber *locationDate;

+ (id)location;
+ (id)locationWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
