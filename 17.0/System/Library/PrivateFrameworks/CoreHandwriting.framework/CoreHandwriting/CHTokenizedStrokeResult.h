@class NSSet;

@interface CHTokenizedStrokeResult : NSObject

@property (readonly, nonatomic) long long resultLevel;
@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (id)initWithStrokeIdentifiers:(id)a0 resultLevel:(long long)a1;

@end
