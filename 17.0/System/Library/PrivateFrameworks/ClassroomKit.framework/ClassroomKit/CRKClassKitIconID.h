@class NSString;

@interface CRKClassKitIconID : NSObject

@property (copy, nonatomic) NSString *mascotIdentifier;
@property (copy, nonatomic) NSString *colorIdentifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)stringBySanitizingString:(id)a0;

- (id)init;
- (id)initWithClass:(id)a0;
- (void).cxx_destruct;
- (id)initWithIconID:(id)a0;
- (id)initWithMascotIdentifier:(id)a0 colorIdentifier:(id)a1;

@end
