@class NSSet, NSString;

@interface CHPrefixQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) NSString *queryResult;
@property (readonly, nonatomic) struct CGPath { } *estimatedBaseline;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqualToPrefixQueryItem:(id)a0;

@end
