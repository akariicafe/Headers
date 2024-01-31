@class NSArray, NSMutableSet;

@interface PPParsedCSSI : NSObject

@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) NSMutableSet *neStrings;
@property (retain, nonatomic) NSMutableSet *topicStrings;

- (id)init;
- (void).cxx_destruct;

@end
