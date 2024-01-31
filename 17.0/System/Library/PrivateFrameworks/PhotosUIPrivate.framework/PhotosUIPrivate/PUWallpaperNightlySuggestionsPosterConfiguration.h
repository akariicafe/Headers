@class NSString, NSSet;

@interface PUWallpaperNightlySuggestionsPosterConfiguration : NSObject <PUWallpaperNightlySuggestionsPosterConfiguration, NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *personLocalIdentifiers;
@property (nonatomic) BOOL includePets;
@property (nonatomic) BOOL includeLandscapes;
@property (nonatomic) BOOL includeCityscapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 personLocalIdentifiers:(id)a1 includePets:(BOOL)a2 includeLandscapes:(BOOL)a3 includeCityscapes:(BOOL)a4;

@end
