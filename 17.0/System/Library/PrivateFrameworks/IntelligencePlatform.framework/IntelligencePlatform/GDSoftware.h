@class NSArray, GDEntityIdentifier;

@interface GDSoftware : NSObject <GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTriplesIterator:(id)a0;

@end
