@class NSArray;

@interface VIScenenetAnnotation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) unsigned long long revision;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnnotations:(id)a0 revision:(unsigned long long)a1;

@end
