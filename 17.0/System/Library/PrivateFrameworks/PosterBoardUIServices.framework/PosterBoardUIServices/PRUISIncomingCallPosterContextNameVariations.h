@class NSDictionary;

@interface PRUISIncomingCallPosterContextNameVariations : NSObject

@property (readonly, nonatomic) NSDictionary *namesDictionary;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNamesDictionary:(id)a0;
- (id)nameForStyle:(long long)a0;

@end
