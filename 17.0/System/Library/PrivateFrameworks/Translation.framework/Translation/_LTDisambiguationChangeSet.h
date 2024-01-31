@class NSString, NSNumber;

@interface _LTDisambiguationChangeSet : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *meaningDescription;
@property (readonly, copy, nonatomic) NSNumber *genderNumber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addUserSelection:(id)a0;
- (BOOL)hasAnyChangeOfType:(unsigned long long)a0;

@end
