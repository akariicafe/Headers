@class NSSet, NSArray;

@interface PRPosterLevelSet : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_levels;
    NSArray *_sortedLevels;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfLevels;

+ (id)defaultLevelSet;
+ (id)allLevelsExceptFloating;
+ (id)compositeLevelSet;
+ (id)levelSetForLevel:(long long)a0;

- (id)initWithLevel:(long long)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsLevel:(long long)a0;
- (void)enumerateLevels:(id /* block */)a0;
- (id)initWithNumberOfLevels:(unsigned long long)a0;
- (BOOL)isEqualToLevelSet:(id)a0;
- (id)sortedLevels;

@end
